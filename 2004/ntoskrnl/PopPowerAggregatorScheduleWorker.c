/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140763DD0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140763854 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407674C4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EB268 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EB650 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1408EC980 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // eax

  *(_DWORD *)(a1 + 20) |= 2u;
  v1 = *(_DWORD *)(a1 + 20);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 20) = v1 | 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4928), DelayedWorkQueue);
  }
}
