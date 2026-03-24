/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576A00
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C211A8, DelayedWorkQueue);
}
