/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1405428B4
 * Callers:
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x140541F6C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C4CB31 )
  {
    stru_140C4CAF0.List.Flink = 0LL;
    stru_140C4CAF0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C4CAF0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C4CAF0, DelayedWorkQueue);
    byte_140C4CB31 = 1;
  }
}
