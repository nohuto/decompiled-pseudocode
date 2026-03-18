/*
 * XREFs of ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180187F50
 * Callers:
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801872EC (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018740C (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801877F0 (-NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180187AD4 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x180188310 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C2324 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseSwapChain(CRemoteAppRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 136);
    *((_QWORD *)this + 21) = 0LL;
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
}
