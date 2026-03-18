/*
 * XREFs of ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x1801843E0
 * Callers:
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801895F4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18018B0E4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z @ 0x180026700 (-SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTarget::SetRoot(CRenderTarget *this, struct CVisual *a2)
{
  struct CVisualTree *v2; // rbx
  int VisualTree; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  struct CVisualTree *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v10);
    v6 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, VisualTree, 0x6Fu, 0LL);
      v2 = v10;
      goto LABEL_7;
    }
    v2 = v10;
  }
  v7 = CRenderTarget::SetVisualTree(this, v2);
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x72u, 0LL);
LABEL_7:
  if ( v2 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
