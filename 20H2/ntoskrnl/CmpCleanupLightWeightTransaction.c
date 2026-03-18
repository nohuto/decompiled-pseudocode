/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1406A1210
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x14076CCC4 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *result; // rax
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  CmpAttachToRegistryProcess((__int64)v10);
  CmpLockRegistryExclusive(v5, v4);
  CmpTransMgrFreeVolatileData(a1, a2);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v10, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v7 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (_QWORD *)a1[1], (_QWORD *)*v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a1[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(a1[7]);
  return result;
}
