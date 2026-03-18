/*
 * XREFs of ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801EAAF4
 * Callers:
 *     ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801E43D8 (-DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1801EA73C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801EB56C (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleScheduler::StopInternal(CComputeScribbleScheduler *this)
{
  CComputeScribbleFramebuffer **v1; // rsi
  CComputeScribbleFramebuffer **i; // rbx

  v1 = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 15);
  for ( i = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 14); i != v1; ++i )
    CComputeScribbleFramebuffer::ClearScribbles(*i);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
}
