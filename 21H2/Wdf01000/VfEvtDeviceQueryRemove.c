/*
 * XREFs of VfEvtDeviceQueryRemove @ 0x1C00C5AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     VerifyCriticalRegionEntry @ 0x1C0061A6C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0061AA0 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0061B08 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C5534 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceQueryRemove(WDFDEVICE__ *Device)
{
  unsigned int v2; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v4)(WDFDEVICE__ *); // rbp
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v4 = (__int64 (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 14);
  if ( v4 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v2 = v4(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v4);
  }
  return v2;
}
