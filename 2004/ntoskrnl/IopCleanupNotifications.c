/*
 * XREFs of IopCleanupNotifications @ 0x14037A5C0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x1406A5870 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v7; // rbx
  PVOID v8; // rcx
  PVOID *v9; // rcx
  PVOID **v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v7 = v5;
    v5 = (PVOID *)*v5;
    v8 = v7[2];
    if ( v8 == a1 && (!a2 || v7[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      ExUnregisterCallback(v7[4]);
      v9 = (PVOID *)*v7;
      if ( *((PVOID **)*v7 + 1) != v7 || (v10 = (PVOID **)v7[1], *v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      ExFreePoolWithTag(v7, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
