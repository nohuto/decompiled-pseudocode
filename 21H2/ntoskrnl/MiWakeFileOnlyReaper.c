/*
 * XREFs of MiWakeFileOnlyReaper @ 0x140542AF4
 * Callers:
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1405421AC (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4CB71 )
  {
    stru_140C4CB30.List.Flink = 0LL;
    stru_140C4CB30.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4CB30.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4CB30, DelayedWorkQueue);
    byte_140C4CB71 = 1;
  }
}
