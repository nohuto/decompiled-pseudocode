/*
 * XREFs of CmObliterateRMTxArray @ 0x140872B74
 * Callers:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // r8
  __int64 **v6; // rax
  __int64 **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD ***result; // rax
  _QWORD **v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-8h]

  v15 = (__int64 *)&v14;
  v14 = &v14;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3;
    v5 = v3;
    v3 = (__int64 *)*v3;
    if ( v4[4] == a1 )
    {
      if ( (__int64 *)v3[1] != v4
        || (v6 = (__int64 **)v4[1], *v6 != v5)
        || (*v6 = v3, v3[1] = (__int64)v6, v7 = (__int64 **)v15, (_QWORD ***)*v15 != &v14) )
      {
LABEL_13:
        __fastfail(3u);
      }
      v5[1] = (__int64)v15;
      *v5 = (__int64)&v14;
      *v7 = v5;
      v15 = v5;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  while ( 1 )
  {
    v11 = v14;
    if ( v14[1] != &v14 )
      goto LABEL_13;
    v12 = (__int64)*v14;
    if ( (_QWORD **)(*v14)[1] != v14 )
      goto LABEL_13;
    v14 = (_QWORD **)*v14;
    *(_QWORD *)(v12 + 8) = &v14;
    result = &v14;
    if ( v11 == &v14 )
      return result;
    CmpCleanupTransactionState(a1, v11 - 4, 8, 0);
  }
}
