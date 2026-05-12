/*
 * XREFs of RaidAdapterFindUnit @ 0x1C00075A4
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x1C0004C90 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C000D820 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 *     RaidAdapterDeferredRoutine @ 0x1C000FF20 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0010064 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C00100D0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0010240 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0017734 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C002B3D4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002B4A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F2B0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F8E0 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C0037660 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0037DE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0038060 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00381E0 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0038520 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0039334 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C003B600 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003B738 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003C258 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003C2D4 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0043850 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0049F88 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportEvent @ 0x1C004F338 (StorEtwMiniportEvent.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0054728 (StorpTelemetryMiniportEvent.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0054FC8 (StorpTelemetryMiniportEventWStr.c)
 *     RaidAdapterPassThrough @ 0x1C00776B8 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00069A8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006A20 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006B2C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C0007618 (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 UnitAtDirql; // rbx
  KIRQL v8; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 688) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    RaidAdapterReleaseInterruptLock(a1, v8);
    return UnitAtDirql;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
