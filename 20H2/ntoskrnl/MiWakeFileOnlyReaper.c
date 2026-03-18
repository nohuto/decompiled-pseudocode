/*
 * XREFs of MiWakeFileOnlyReaper @ 0x140540DB4
 * Callers:
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14054046C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4C9B1 )
  {
    stru_140C4C970.List.Flink = 0LL;
    stru_140C4C970.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4C970.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4C970, DelayedWorkQueue);
    byte_140C4C9B1 = 1;
  }
}
