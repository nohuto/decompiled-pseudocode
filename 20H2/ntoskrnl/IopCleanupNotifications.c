/*
 * XREFs of IopCleanupNotifications @ 0x14037C2F0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x14071F530 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
