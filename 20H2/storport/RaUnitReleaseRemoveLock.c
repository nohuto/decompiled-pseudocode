/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C000B600
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C00077B8 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B1A8 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0011120 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C0012238 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00124A8 (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00142F4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00152A0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0015620 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0015A20 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001C818 (RaUnitDeleteDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B60C (RaidAdapterCheckWaitTimeout.c)
 *     RaidCancelIrp @ 0x1C0044AA8 (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0047450 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C00474DC (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0048BF8 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049AF0 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A240 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004ABC0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00742F0 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C00750B4 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C007B500 (RaUnitStorageDumpControl.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  unsigned __int64 v1; // r9
  LONG result; // eax
  LONG v3; // ett

  v1 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  result = *(_DWORD *)(v1 + *(_QWORD *)(a1 + 32));
  while ( (result & 1) == 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + *(_QWORD *)(a1 + 32)), result - 2, result);
    if ( v3 == result )
      return result;
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
