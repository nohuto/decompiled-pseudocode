/*
 * XREFs of CmpGetCallbackObjectContext @ 0x1405EAE54
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x14070ADD0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v4 = a1 + 18;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v7 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v8 = *a2;
    while ( v7[4] != v8 )
    {
      if ( v7[4] >= v8 )
      {
        v7 = (_QWORD *)*v7;
        if ( v7 != v4 )
          continue;
      }
      goto LABEL_9;
    }
    v2 = v7[7];
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v2;
}
