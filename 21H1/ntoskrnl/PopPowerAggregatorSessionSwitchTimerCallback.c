/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x14056E400
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C217D0, DelayedWorkQueue);
}
