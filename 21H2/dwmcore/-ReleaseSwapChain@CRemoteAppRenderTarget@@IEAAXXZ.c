/*
 * XREFs of ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801C2F80
 * Callers:
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801C1FF0 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801C21F8 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C2980 (-NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801C2B50 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801C390C (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C3A9C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseSwapChain(CRemoteAppRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = (char *)this + 168;
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 144);
    *((_QWORD *)this + 22) = 0LL;
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
}
