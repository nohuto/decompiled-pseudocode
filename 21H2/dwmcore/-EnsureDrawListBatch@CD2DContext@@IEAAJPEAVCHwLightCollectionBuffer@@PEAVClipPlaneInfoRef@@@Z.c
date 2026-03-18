/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180279458 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x180104F10 (-GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x1801EBF58 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1801F10D0 (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct ClipPlaneInfoRef **v5; // rcx
  struct CD2DTarget *CurrentTargetNoRef; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct CHwLightCollectionBuffer *v11; // rdx
  struct CDrawListEntryBatch *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct CDrawListEntryBatch *v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 17);
  v20 = (struct CDrawListEntryBatch *)v5;
  if ( v5 )
  {
    if ( v5[4] == a3 )
    {
      v17 = CDrawListEntryBatch::SetLightingCollection(v5, a2);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x1F4u);
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v15 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x1F0u);
    }
  }
  else
  {
    CurrentTargetNoRef = CD2DContext::GetCurrentTargetNoRef(this);
    v8 = CDrawListBatchManager::OpenDrawListEntryBatch(
           (CD2DContext *)((char *)this + 8),
           *((struct IDeviceTarget **)CurrentTargetNoRef + 3),
           &v20);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x1E1u);
    }
    else
    {
      v11 = a2;
      v12 = v20;
      v13 = CDrawListEntryBatch::SetLightingCollection((struct CHwLightCollectionBuffer **)v20, v11);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x1E3u);
      else
        Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=((_QWORD *)v12 + 4, (void (__fastcall ***)(_QWORD))a3);
    }
  }
  return v10;
}
