/*
 * XREFs of PfSnTracingStateDpcRoutine @ 0x140377360
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PfSnTracingStateDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 4, DelayedWorkQueue);
}
