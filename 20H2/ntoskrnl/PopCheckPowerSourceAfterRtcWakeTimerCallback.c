/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140574FF0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C21088, DelayedWorkQueue);
}
