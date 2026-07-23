/*
 * XREFs of IoUnregisterContainerNotification @ 0x140894DE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rax
  PVOID *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID *v8; // rcx
  PVOID **v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v3 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v3 != &IopSessionNotificationQueueHead )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    if ( v4[4] == CallbackRegistration )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v4[2]);
      ExUnregisterCallback(CallbackRegistration);
      v8 = (PVOID *)*v4;
      if ( *((PVOID **)*v4 + 1) != v4 || (v9 = (PVOID **)v4[1], *v9 != v4) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      ExFreePoolWithTag(v4, 0);
      break;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
