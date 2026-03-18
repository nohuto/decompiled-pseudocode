/*
 * XREFs of MiWakeFileOnlyReaper @ 0x14053D3E4
 * Callers:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14053CA9C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4C931 )
  {
    stru_140C4C8F0.List.Flink = 0LL;
    stru_140C4C8F0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4C8F0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4C8F0, DelayedWorkQueue);
    byte_140C4C931 = 1;
  }
}
