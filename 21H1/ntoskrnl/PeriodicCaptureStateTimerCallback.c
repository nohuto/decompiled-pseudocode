/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x14093B080
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2, NormalWorkQueue);
}
