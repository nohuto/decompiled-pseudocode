/*
 * XREFs of CmpEnumerateCallback @ 0x14077CF70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v3 = &CallbackListHead;
  if ( *a1 )
    v3 = *a1;
  v4 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v5 = *v3;
  v6 = 0LL;
  while ( (__int64 *)v5 != &CallbackListHead )
  {
    if ( *(int *)(v5 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
      v6 = *(_QWORD *)(v5 + 40);
      *a1 = (__int64 *)v5;
      break;
    }
    v5 = *(_QWORD *)v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( v4 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v11, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  return v6;
}
