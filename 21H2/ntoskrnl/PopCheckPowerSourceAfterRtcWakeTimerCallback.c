/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D6DA0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C20568, DelayedWorkQueue);
}
