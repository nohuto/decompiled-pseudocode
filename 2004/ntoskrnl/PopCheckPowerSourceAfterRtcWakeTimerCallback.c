/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405715C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C21068, DelayedWorkQueue);
}
