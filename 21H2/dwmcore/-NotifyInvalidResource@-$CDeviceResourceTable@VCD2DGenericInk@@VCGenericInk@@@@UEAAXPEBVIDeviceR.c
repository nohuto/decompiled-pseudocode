/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801A1890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801A1F2C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1));
}
