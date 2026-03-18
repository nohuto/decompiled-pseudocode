/*
 * XREFs of ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18028B6C0
 * Callers:
 *     ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180292D70 (-NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x18028BA04 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::NotifyInvalidResource(CLegacySwapChain *this, const struct IDeviceResource *a2)
{
  char *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (char *)this - 56;
  CLegacySwapChain::ReleaseD3D12Resources((CLegacySwapChain *)((char *)this - 56));
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CDeviceResource::NotifyInvalid(
    (CLegacySwapChain *)((char *)this - 40),
    (CLegacySwapChain *)((char *)this + *(int *)(*((_QWORD *)this - 4) + 8LL) - 32));
}
