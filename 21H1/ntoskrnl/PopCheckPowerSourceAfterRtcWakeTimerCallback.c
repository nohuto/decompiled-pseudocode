/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140570F70
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C211A8, DelayedWorkQueue);
}
