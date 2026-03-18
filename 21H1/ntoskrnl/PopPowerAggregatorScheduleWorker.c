/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x1407624F0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140761F74 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140765B04 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408E9FE8 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EA3D0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1408EB700 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
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
