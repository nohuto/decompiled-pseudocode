/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x140868060
 * Callers:
 *     CmpUpdateSystemHiveHysteresis @ 0x140637C0C (CmpUpdateSystemHiveHysteresis.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1407C1408 (CmRegisterSystemHiveLimitCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    CmpSystemHiveHysteresisHitRatio = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
