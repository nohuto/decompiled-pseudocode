/*
 * XREFs of CmpLazyCommitWorker @ 0x14086F680
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // al
  struct _KTHREAD *v3; // rcx
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 **v8; // rax
  struct _KTHREAD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD **v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+68h] [rbp+28h] BYREF

  v15 = 0;
  v14 = (__int64 *)&v13;
  v0 = 1;
  v13 = &v13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    --v3->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v6 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v7 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v7 + 8) = &CmpLazyCommitListHead;
      if ( v6 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v6[4], (__int64)(v6 - 4), &v15) < 0 )
      {
        v8 = (__int64 **)v14;
        if ( (_QWORD ***)*v14 != &v13 )
          goto LABEL_20;
        v6[1] = (__int64)v14;
        *v6 = (__int64)&v13;
        v0 = 0;
        *v8 = v6;
        v14 = v6;
      }
      else
      {
        CmpCleanupTransactionState(v6[4], v6 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v9 = KeGetCurrentThread();
      --v9->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v10 = v13;
        if ( v13[1] != &v13 )
          goto LABEL_20;
        v11 = (__int64)*v13;
        if ( (_QWORD **)(*v13)[1] != v13 )
          goto LABEL_20;
        v13 = (_QWORD **)*v13;
        *(_QWORD *)(v11 + 8) = &v13;
        if ( v10 == &v13 )
          break;
        v12 = (_QWORD *)qword_140C47C08;
        if ( *(__int64 **)qword_140C47C08 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v10 = &CmpLazyCommitListHead;
        v10[1] = v12;
        *v12 = v10;
        qword_140C47C08 = (__int64)v10;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v3 = KeGetCurrentThread();
  }
  return KeLeaveCriticalRegionThread((__int64)v3);
}
