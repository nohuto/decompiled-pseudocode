/*
 * XREFs of RaidRestartIoQueue @ 0x1C00078AC
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C0002898 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E4 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006144 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012E48 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C001362C (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0014B64 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0015A70 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C001A164 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002C2FC (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C0030740 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0049E64 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C004B720 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0007968 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000AEF4 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
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
