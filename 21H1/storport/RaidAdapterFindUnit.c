/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0006FB4
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x1C0004BA0 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidAdapterDeferredRoutine @ 0x1C000E160 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C000E2A4 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C000E310 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000E480 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00158C4 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C002AE34 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002AF08 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002ECF8 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F330 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C00370E0 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0037860 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0037AE0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0037C60 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0037FA0 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0038DB4 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C003B030 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003B168 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003BC88 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003BD04 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0043168 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0049878 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportEvent @ 0x1C004EC28 (StorEtwMiniportEvent.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0054018 (StorpTelemetryMiniportEvent.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00548B8 (StorpTelemetryMiniportEventWStr.c)
 *     RaidAdapterPassThrough @ 0x1C0077794 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00064E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006560 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000666C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C0007028 (RaidAdapterFindUnitAtPassive.c)
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
