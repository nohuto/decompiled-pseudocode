/*
 * XREFs of ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802482D0
 * Callers:
 *     ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18024DD50 (-NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x1802486B8 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::NotifyInvalidResource(CLegacySwapChain *this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v3 + 16LL))(v3, a2);
  (*(void (__fastcall **)(char *, const struct IDeviceResource *))(*((_QWORD *)this - 7) + 56LL))((char *)this - 56, a2);
  v4 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CLegacySwapChain::ReleaseD3D12Resources((CLegacySwapChain *)((char *)this - 56));
  CDeviceResource::NotifyInvalid(
    (CLegacySwapChain *)((char *)this - 40),
    (CLegacySwapChain *)((char *)this + *(int *)(*((_QWORD *)this - 4) + 8LL) - 32));
}
