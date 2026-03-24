/*
 * XREFs of IopCleanupNotifications @ 0x14037C458
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140252C8C (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x1406B2FD0 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
