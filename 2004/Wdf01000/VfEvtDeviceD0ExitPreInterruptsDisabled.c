/*
 * XREFs of VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C48C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     VerifyCriticalRegionEntry @ 0x1C0043FEC (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044018 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0044078 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0ExitPreInterruptsDisabled(WDFDEVICE__ *Device, unsigned int TargetState)
{
  unsigned int v4; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v6)(WDFDEVICE__ *, _QWORD); // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 5);
  if ( v6 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v4 = v6(Device, TargetState);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v6);
  }
  return v4;
}
