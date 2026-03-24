/*
 * XREFs of KeyboardToggleWaitWake @ 0x1C0005DD8
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0005BC0 (KeyboardClassWaitWakeComplete.c)
 *     KeyboardClassSetWmiDataBlock @ 0x1C000F870 (KeyboardClassSetWmiDataBlock.c)
 *     KeyboardClassSetWmiDataItem @ 0x1C000F910 (KeyboardClassSetWmiDataItem.c)
 * Callees:
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005F20 (KeyboardToggleWaitWakeWorker.c)
 */

NTSTATUS __fastcall KeyboardToggleWaitWake(__int64 a1, char a2)
{
  struct _IO_REMOVE_LOCK *v2; // rsi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rbx
  struct _IO_WORKITEM *WorkItem; // rax

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 32);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), KeyboardToggleWaitWakeWorker, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x4364624Bu);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      PoolWithTag[2] = WorkItem;
      if ( !WorkItem )
      {
        IoReleaseRemoveLockEx(v2, KeyboardToggleWaitWakeWorker, 0x20u);
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741670;
      }
      PoolWithTag[1] = a1;
      *((_BYTE *)PoolWithTag + 24) = a2;
      if ( KeGetCurrentIrql() )
        IoQueueWorkItem(WorkItem, KeyboardToggleWaitWakeWorker, DelayedWorkQueue, PoolWithTag);
      else
        KeyboardToggleWaitWakeWorker(*(PDEVICE_OBJECT *)a1, PoolWithTag);
    }
    else
    {
      IoReleaseRemoveLockEx(v2, KeyboardToggleWaitWakeWorker, 0x20u);
    }
    return 0;
  }
  return result;
}
