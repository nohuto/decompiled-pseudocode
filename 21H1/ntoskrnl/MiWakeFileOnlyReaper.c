/*
 * XREFs of MiWakeFileOnlyReaper @ 0x14053CD94
 * Callers:
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14053C44C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4CA71 )
  {
    stru_140C4CA30.List.Flink = 0LL;
    stru_140C4CA30.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4CA30.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4CA30, DelayedWorkQueue);
    byte_140C4CA71 = 1;
  }
}
