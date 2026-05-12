/*
 * XREFs of RaidRestartIoQueue @ 0x1C00088BC
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0007104 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     RaidSetUnitPauseTimer @ 0x1C0010018 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0010064 (RaidAdapterResumeUnit.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0013604 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C00144C0 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C0019680 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002B4A8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F8E0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0049054 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C004A910 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0008978 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000BC34 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
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
