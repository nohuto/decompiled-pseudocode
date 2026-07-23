/*
 * XREFs of CmpLazyCommitWorker @ 0x140872C90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *v6; // rcx
  struct _KTHREAD *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD **v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-8h]
  int v31; // [rsp+68h] [rbp+28h] BYREF

  v31 = 0;
  v30 = (__int64 *)&v29;
  v0 = 1;
  v29 = &v29;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v6 = KeGetCurrentThread();
  if ( v2 )
  {
    --v6->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v9 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v10 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v10 + 8) = &CmpLazyCommitListHead;
      if ( v9 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
      if ( (int)CmpTransMgrCommit(v14, (__int64)(v9 - 4), &v31) < 0 )
      {
        v15 = (__int64 **)v30;
        if ( (_QWORD ***)*v30 != &v29 )
          goto LABEL_20;
        v9[1] = (__int64)v30;
        *v9 = (__int64)&v29;
        v0 = 0;
        *v15 = v9;
        v30 = v9;
      }
      else
      {
        CmpCleanupTransactionState(v9[4], v9 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
    if ( !v0 )
    {
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v20 = v29;
        if ( v29[1] != &v29 )
          goto LABEL_20;
        v21 = (__int64)*v29;
        if ( (_QWORD **)(*v29)[1] != v29 )
          goto LABEL_20;
        v29 = (_QWORD **)*v29;
        *(_QWORD *)(v21 + 8) = &v29;
        if ( v20 == &v29 )
          break;
        v22 = (_QWORD *)qword_140C47D88;
        if ( *(__int64 **)qword_140C47D88 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v20 = &CmpLazyCommitListHead;
        v20[1] = v22;
        *v22 = v20;
        qword_140C47D88 = (__int64)v20;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v6 = KeGetCurrentThread();
  }
  return KeLeaveCriticalRegionThread((__int64)v6, v3, v4, v5);
}
