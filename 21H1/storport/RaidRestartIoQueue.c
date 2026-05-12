/*
 * XREFs of RaidRestartIoQueue @ 0x1C00082CC
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006B14 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C000A2D0 (RaUnitScsiIrp.c)
 *     RaidSetUnitPauseTimer @ 0x1C000E258 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C000E2A4 (RaidAdapterResumeUnit.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000FB38 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C0010268 (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011794 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0012650 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C0017810 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002AF08 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F330 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0048944 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C004A200 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0008388 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B644 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // di
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rsi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 32);
  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    v2 = KfRaiseIrql(2u);
  v4 = RaidNormalizeDeviceQueue(a1 + 656);
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 664)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 648))(*(_QWORD *)(a1 + 640), v4 - 120, v5);
  if ( CurrentIrql != 2 )
    KeLowerIrql(v2);
}
