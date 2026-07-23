/*
 * XREFs of IopCleanupNotifications @ 0x14037BFA8
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140285B3C (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x140612090 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID *v10; // rbx
  PVOID v11; // rcx
  PVOID *v12; // rcx
  PVOID **v13; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v10 = v5;
    v5 = (PVOID *)*v5;
    v11 = v10[2];
    if ( v11 == a1 && (!a2 || v10[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      ExUnregisterCallback(v10[4]);
      v12 = (PVOID *)*v10;
      if ( *((PVOID **)*v10 + 1) != v10 || (v13 = (PVOID **)v10[1], *v13 != v10) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      ExFreePoolWithTag(v10, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
