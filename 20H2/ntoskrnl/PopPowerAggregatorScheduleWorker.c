/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x1407723E0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407764F4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408F0E78 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408F1260 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1408F2590 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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
