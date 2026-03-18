/*
 * XREFs of CmpCleanupTransactionState @ 0x14075B618
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x1406590AC (CmpRunDownCmRM.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpLogCheckpoint @ 0x14075B778 (CmpLogCheckpoint.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  char v5; // bp
  int v6; // ebx
  __int64 v8; // r8
  _DWORD *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rcx
  void **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rcx
  struct _KTHREAD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _OWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (char)a4;
  memset(v23, 0, sizeof(v23));
  v6 = a3;
  CmpAttachToRegistryProcess((__int64)v23, (__int64)a2, a3, a4);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, v6);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v23, 0LL, v8, v9);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v11 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v12 = (void **)a2[1], *v12 != a2) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = v12;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v16 = (void *)a2[9];
  if ( v16 )
    ObDereferenceObjectDeferDelete(v16);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( v5 )
  {
    CmpLockRegistry();
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v18) = 1;
    CmpLogCheckpoint(a1, v19, v18);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
    CmpUnlockRegistry();
  }
}
