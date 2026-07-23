/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1405DEB10
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1405DE998 (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x1407711A4 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x1405DEFE0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *result; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  CmpAttachToRegistryProcess(v13);
  CmpLockRegistryExclusive(v3, v2);
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2);
  CmpUnlockRegistry(v5, v4);
  KiUnstackDetachProcess((__int64)v13, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v7 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v8 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v8 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( BugCheckParameter2[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(BugCheckParameter2[7]);
  return result;
}
