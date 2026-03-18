/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18016F840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x18016FCE8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1));
}
