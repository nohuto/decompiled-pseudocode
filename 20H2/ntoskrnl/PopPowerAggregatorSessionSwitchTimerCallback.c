/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140572480
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C216B0, DelayedWorkQueue);
}
