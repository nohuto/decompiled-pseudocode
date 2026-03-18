/*
 * XREFs of VfEvtDeviceSelfManagedIoRestart @ 0x1C00C4F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     VerifyCriticalRegionEntry @ 0x1C0043FEC (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044018 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0044078 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceSelfManagedIoRestart(WDFDEVICE__ *Device)
{
  unsigned int v2; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v4)(WDFDEVICE__ *); // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v4 = (__int64 (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 12);
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
