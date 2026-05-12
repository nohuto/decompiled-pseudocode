/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C000BD50
 * Callers:
 *     RaUnitStartIo @ 0x1C0004F30 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C00081D8 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiIrp @ 0x1C000A2D0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C000A730 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C000CCD0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000EC1C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C000EF78 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000F1E8 (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0010F24 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0011ED0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0012250 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0012600 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0019CD0 (RaUnitDeleteDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002A21C (RaidAdapterCheckWaitTimeout.c)
 *     RaidCancelIrp @ 0x1C00434BC (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0045F30 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0045FBC (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C00485D0 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0048D20 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C00496A0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072D84 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0073E64 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C007A0E0 (RaUnitStorageDumpControl.c)
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
