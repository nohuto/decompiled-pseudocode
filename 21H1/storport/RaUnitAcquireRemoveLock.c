/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C000BD94
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 *     StorpLogPerUnitStatistics @ 0x1C000C7A8 (StorpLogPerUnitStatistics.c)
 *     RaUnitPowerIrp @ 0x1C000EF78 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000F1E8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000F34C (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000FB38 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0010F24 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011794 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002A21C (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0048B10 (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C0073E64 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C007A0E0 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C000BDF8 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // ebx
  __int64 v7; // r10

  v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v4 = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 32));
  while ( (v4 & 1) == 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 32)), v4 + 2, v4);
    if ( v5 == v4 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 912), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
