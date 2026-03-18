/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1406E26C4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x1406E2624 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x14067F788 (CmpTransDereferenceTransaction.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  CmpAttachToRegistryProcess(v9);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2);
  CmpUnlockRegistry(v3, v2, v4, v5);
  CmpDetachFromRegistryProcess(v9);
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
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
