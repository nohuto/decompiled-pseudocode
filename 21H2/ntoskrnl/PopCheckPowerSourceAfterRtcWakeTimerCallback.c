/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576C40
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C211E8, DelayedWorkQueue);
}
