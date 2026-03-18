/*
 * XREFs of IoQueueWorkItemEx @ 0x140342A30
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140297A0C (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemFromIo @ 0x140342A58 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  v4 = IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v4);
}
