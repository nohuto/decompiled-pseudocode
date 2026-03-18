/*
 * XREFs of IoQueueWorkItem @ 0x140304FA0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14025B18C (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemFromIo @ 0x140304FF8 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  IoWorkItem->Type = 0;
  v4 = IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v4);
}
