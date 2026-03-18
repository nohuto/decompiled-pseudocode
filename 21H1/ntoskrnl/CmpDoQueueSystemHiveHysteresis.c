/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x140866D1C
 * Callers:
 *     CmpUpdateSystemHiveHysteresis @ 0x1406857DC (CmpUpdateSystemHiveHysteresis.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140788FD8 (CmRegisterSystemHiveLimitCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
