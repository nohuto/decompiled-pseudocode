/*
 * XREFs of ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180191468
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801902E4 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800D5948 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 */

__int64 __fastcall CDDisplayRenderTarget::TryEnsureSwapChain(CDDisplayRenderTarget *this)
{
  CRenderTargetBitmap **v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rax
  int DDisplaySwapchainForSource; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v1 = (CRenderTargetBitmap **)((char *)this + 168);
  v2 = 0;
  v3 = *((_QWORD *)this + 21);
  if ( !v3 || *(int *)(*(_QWORD *)(v3 + 88) + 1128LL) < 0 )
  {
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset((CRenderTargetBitmap **)this + 21);
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(v1);
    DDisplaySwapchainForSource = CDDisplayManager::CreateDDisplaySwapchainForSource(
                                   *((CDDisplayManager **)this + 19),
                                   (CDDisplayRenderTarget *)((char *)this + 18588),
                                   *((_DWORD *)this + 4653),
                                   (CDDisplayRenderTarget *)((char *)this + 88),
                                   (const struct D2D_SIZE_U *)this + 10,
                                   *((_DWORD *)this + 4654),
                                   *((void **)this + 19),
                                   v1);
    v2 = DDisplaySwapchainForSource;
    if ( DDisplaySwapchainForSource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DDisplaySwapchainForSource, 0x105u, 0LL);
    }
    else
    {
      v7 = COverlayContext::OnSwapChainCreated((CDDisplayRenderTarget *)((char *)this + 176));
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x107u, 0LL);
    }
  }
  return v2;
}
