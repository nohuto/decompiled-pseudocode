/*
 * XREFs of WheapWorkQueueDpcRoutine @ 0x1405BBDC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 3, DelayedWorkQueue);
}
