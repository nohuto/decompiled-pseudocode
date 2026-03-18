/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x140656718
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x14075C174 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *result; // rax
  _OWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  memset(v17, 0, sizeof(v17));
  CmpAttachToRegistryProcess((__int64)v17, a2, a3, a4);
  CmpLockRegistryExclusive(v7, v6);
  CmpTransMgrFreeVolatileData(a1, v5);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v17, 0LL, v8, v9);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v11 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v12 = (_QWORD *)a1[1], (_QWORD *)*v12 != a1) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( a1[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(a1[7]);
  return result;
}
