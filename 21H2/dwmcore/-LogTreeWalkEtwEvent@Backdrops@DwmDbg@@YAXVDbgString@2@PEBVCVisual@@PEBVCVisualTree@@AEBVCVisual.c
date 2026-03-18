/*
 * XREFs of ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x1800D4F5C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 * Callees:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x180262074 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

void __fastcall DwmDbg::Backdrops::LogTreeWalkEtwEvent(void **a1, __int64 a2, __int64 *a3, _QWORD *a4, void **a5)
{
  void *v8; // rcx
  void *v9; // rcx
  DwmDbg::DbgString *DebugString; // rax
  int v11; // r9d
  int v12; // r8d
  void *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rax
  void **v16; // rax
  char v17; // di
  __int64 v18; // rcx
  void *v19[8]; // [rsp+68h] [rbp-21h] BYREF
  void *v20; // [rsp+A8h] [rbp+1Fh] BYREF
  void *v21; // [rsp+B0h] [rbp+27h] BYREF
  void *v22; // [rsp+B8h] [rbp+2Fh] BYREF

  LODWORD(v19[0]) = 0;
  if ( dword_1803D0F60 )
  {
    if ( (unsigned int)dword_1803D0F60 > 5 )
    {
      v19[1] = *a5;
      DebugString = CVisualTreePath::GetDebugString(a4, (DwmDbg::DbgString *)&v22);
      v11 = *(_DWORD *)(a2 + 268);
      v12 = *(_DWORD *)(a2 + 264);
      v13 = *(void **)DebugString;
      LODWORD(DebugString) = *(unsigned __int8 *)(a2 + 272);
      v19[2] = v13;
      DwmDbg::DbgString::DbgString(
        (char **)v19,
        "BackdropsInSubgraph=%d, WindowBackdropsInSubgraph=%d, HasBackdropInput=%d, HasWindowBackdropInput=%d, HasBlurred"
        "WallpaperBackdropInput=%d",
        v12,
        v11,
        (unsigned __int8)DebugString & 1,
        ((unsigned int)DebugString >> 2) & 1,
        ((unsigned int)DebugString >> 1) & 1);
      v14 = v19[0];
      v15 = *a3;
      v19[3] = v19[0];
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v15 + 184))(a3) )
      {
        v16 = (void **)DwmDbg::DbgString::DbgString((char **)&v21, "0x%p (DesktopTree)", a3);
        v17 = 1;
      }
      else
      {
        DwmDbg::DbgString::DbgString((char **)v19, "0x%p", a3);
        v16 = v19;
        v17 = 2;
      }
      v19[4] = *v16;
      v19[5] = *(void **)DwmDbg::DbgString::DbgString((char **)&v20, "0x%p", (const void *)a2);
      v19[6] = GetCurrentFrameId();
      v19[7] = *a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v18,
        &unk_180372707);
      if ( v20 )
        DefaultHeap::Free(v20);
      if ( (v17 & 2) != 0 )
      {
        v17 &= ~2u;
        if ( v19[0] )
          DefaultHeap::Free(v19[0]);
      }
      if ( (v17 & 1) != 0 && v21 )
        DefaultHeap::Free(v21);
      if ( v14 )
        DefaultHeap::Free(v14);
      if ( v22 )
        DefaultHeap::Free(v22);
    }
    if ( *a1 )
      DefaultHeap::Free(*a1);
    v9 = *a5;
  }
  else
  {
    v8 = *a1;
    if ( v8 )
      DefaultHeap::Free(v8);
    v9 = *a5;
  }
  if ( v9 )
    DefaultHeap::Free(v9);
}
