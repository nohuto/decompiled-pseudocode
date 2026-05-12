/*
 * XREFs of RaidAdapterFindUnit @ 0x1C00065E4
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E4 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0003630 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0017BCC (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C228 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C2FC (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0030114 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C0030740 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C00384D0 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0038C50 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0038ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0039050 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0039390 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C003A1F4 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C003C4C0 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003D17C (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D1F8 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0044754 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004AD98 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportEvent @ 0x1C00501F0 (StorEtwMiniportEvent.c)
 *     StorpTelemetryMiniportEvent @ 0x1C00555EC (StorpTelemetryMiniportEvent.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0055E8C (StorpTelemetryMiniportEventWStr.c)
 *     RaidAdapterPassThrough @ 0x1C0078B8C (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005A60 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C0006658 (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 UnitAtDirql; // rbx
  KIRQL v8; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 704) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    RaidAdapterReleaseInterruptLock(a1, v8);
    return UnitAtDirql;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
