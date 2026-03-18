/*
 * XREFs of ?ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ @ 0x18018C01C
 * Callers:
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018BBAC (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CLocalAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x18018BDC0 (-NotifyInvalidResource@CLocalAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C2324 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLocalAppRenderTarget::ReleaseSwapChain(CLocalAppRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (__int64 *)((char *)this + 152);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 136);
  }
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 18);
}
