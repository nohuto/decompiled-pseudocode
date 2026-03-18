/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x140653428
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140653348 (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x14075E654 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpTransDereferenceTransaction @ 0x140653900 (CmpTransDereferenceTransaction.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *result; // rax
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  CmpAttachToRegistryProcess((__int64)v8);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a1, a2);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v8, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a1[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(a1[7]);
  return result;
}
