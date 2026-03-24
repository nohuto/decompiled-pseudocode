/*
 * XREFs of IoQueueWorkItem @ 0x1402B63C0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140206670 (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemFromIo @ 0x1402B6418 (ExQueueWorkItemFromIo.c)
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
