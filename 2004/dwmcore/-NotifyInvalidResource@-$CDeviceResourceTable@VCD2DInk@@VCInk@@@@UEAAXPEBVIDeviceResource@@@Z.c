/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180171550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ @ 0x1801719BC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::NotifyInvalidResource(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
  CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
}
