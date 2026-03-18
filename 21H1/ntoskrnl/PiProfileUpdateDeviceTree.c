/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x1408A6C10
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x1408A7010 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408A70BC (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  return 0LL;
}
