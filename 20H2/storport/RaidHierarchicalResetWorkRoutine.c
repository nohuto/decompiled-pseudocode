/*
 * XREFs of RaidHierarchicalResetWorkRoutine @ 0x1C0049AF0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     StorLogIoError @ 0x1C00460B4 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C004A914 (RaidUnitHierarchicalReset.c)
 */

void __fastcall RaidHierarchicalResetWorkRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 224, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 221);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    StorLogIoError(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 24), -2147221375, 1);
    ++*(_DWORD *)(*((_QWORD *)DeviceExtension + 3) + 4844LL);
    RaidUnitHierarchicalReset(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 224, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 221) == Context )
    {
      *((_QWORD *)DeviceExtension + 221) = 0LL;
      *((_DWORD *)DeviceExtension + 444) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
