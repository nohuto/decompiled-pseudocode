/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x14094F804
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14094FC28 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14094FCD4 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, CriticalWorkQueue);
  return 0LL;
}
