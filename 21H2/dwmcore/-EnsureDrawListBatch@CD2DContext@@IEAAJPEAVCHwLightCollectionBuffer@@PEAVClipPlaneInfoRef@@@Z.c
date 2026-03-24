/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A148
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800784A0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A148 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18023B1CC (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z @ 0x18002B210 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A148 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007A1E4 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180090B3C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct ClipPlaneInfoRef **v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct CHwLightCollectionBuffer *v10; // rdx
  CDrawListEntryBatch *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  struct ClipPlaneInfoRef *v14; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  CDrawListEntryBatch *v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct ClipPlaneInfoRef **)*((_QWORD *)this + 22);
  v20 = (CDrawListEntryBatch *)v5;
  if ( v5 )
  {
    if ( v5[4] == a3 )
    {
      v16 = CDrawListEntryBatch::SetLightingCollection((CDrawListEntryBatch *)v5, a2);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1E2u, 0LL);
    }
    else
    {
      CD2DContext::FlushDrawList(this);
      v18 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
      v9 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1DEu, 0LL);
    }
  }
  else
  {
    v7 = CDrawListBatchManager::OpenDrawListEntryBatch((CD2DContext *)((char *)this + 8), &v20);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1CFu, 0LL);
    }
    else
    {
      v10 = a2;
      v11 = v20;
      v12 = CDrawListEntryBatch::SetLightingCollection(v20, v10);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1D1u, 0LL);
      }
      else
      {
        v14 = (struct ClipPlaneInfoRef *)*((_QWORD *)v11 + 4);
        if ( v14 != a3 )
        {
          if ( a3 )
          {
            (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
            v14 = (struct ClipPlaneInfoRef *)*((_QWORD *)v11 + 4);
          }
          *((_QWORD *)v11 + 4) = a3;
          if ( v14 )
            (*(void (__fastcall **)(struct ClipPlaneInfoRef *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
  }
  return v9;
}
