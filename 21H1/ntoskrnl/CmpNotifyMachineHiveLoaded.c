/*
 * XREFs of CmpNotifyMachineHiveLoaded @ 0x1403B3080
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall CmpNotifyMachineHiveLoaded(unsigned int a1)
{
  __int64 v1; // rcx

  v1 = 25LL * a1;
  if ( _InterlockedIncrement((volatile signed __int32 *)&CmpMachineHiveList[v1 + 22]) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)CmpMachineHiveList[v1 + 21], DelayedWorkQueue);
}
