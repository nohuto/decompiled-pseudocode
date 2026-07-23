/*
 * XREFs of CmpRunDownCmRM @ 0x1405E0E80
 * Callers:
 *     CmShutdownCmRM @ 0x1405E0E38 (CmShutdownCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     CmpDelayFreeCmRm @ 0x1405E0FFC (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // rax
  struct _KTHREAD *v11; // rax
  __int64 *v12; // rdx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rcx
  void *v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // r8
  __int64 **v22; // rax
  __int64 **v23; // rax
  _QWORD **v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v25; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v25 = (__int64 *)&v24;
    v24 = &v24;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v20 = v5;
      v21 = v5;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v20[4] == a1 )
      {
        if ( (__int64 *)v5[1] != v20 )
          goto LABEL_26;
        v22 = (__int64 **)v20[1];
        if ( *v22 != v21 )
          goto LABEL_26;
        *v22 = v5;
        v5[1] = (__int64)v22;
        v23 = (__int64 **)v25;
        if ( (_QWORD ***)*v25 != &v24 )
          goto LABEL_26;
        v21[1] = (__int64)v25;
        *v21 = (__int64)&v24;
        *v23 = v21;
        v25 = v21;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
    while ( 1 )
    {
      v9 = v24;
      if ( v24[1] != &v24 )
        goto LABEL_26;
      v10 = (__int64)*v24;
      if ( (_QWORD **)(*v24)[1] != v24 )
        goto LABEL_26;
      v24 = (_QWORD **)*v24;
      *(_QWORD *)(v10 + 8) = &v24;
      if ( v9 == &v24 )
        break;
      CmpCleanupTransactionState(a1, v9 - 4, 4LL);
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *((_DWORD *)a1 + 26) |= 8u;
    v12 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v13 = (__int64 **)a1[1], *v13 != a1) )
LABEL_26:
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (__int64)v13;
    v14 = a1[10];
    if ( v14 )
    {
      *(_QWORD *)(v14 + 4192) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
    v18 = (void *)a1[7];
    if ( v18 )
    {
      ObDereferenceObjectDeferDelete(v18);
      a1[7] = 0LL;
    }
    v19 = (void *)a1[5];
    if ( v19 )
    {
      ObDereferenceObjectDeferDelete(v19);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
