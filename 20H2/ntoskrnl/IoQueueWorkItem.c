/*
 * XREFs of IoQueueWorkItem @ 0x1402D51A0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14020995C (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemFromIo @ 0x1402D45F8 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _QWORD *v5; // rax

  IoWorkItem->Type = 0;
  v5 = (_QWORD *)IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
