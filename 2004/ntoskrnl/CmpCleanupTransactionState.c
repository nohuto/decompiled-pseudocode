/*
 * XREFs of CmpCleanupTransactionState @ 0x14075DB00
 * Callers:
 *     CmpRunDownCmRM @ 0x140652EF0 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140653D20 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpTransDereferenceTransaction @ 0x140653900 (CmpTransDereferenceTransaction.c)
 *     CmpLogCheckpoint @ 0x14075DC60 (CmpLogCheckpoint.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rcx
  void **v10; // rax
  void *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _OWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  CmpAttachToRegistryProcess((__int64)v15);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v15, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (void **)a2[1], *v10 != a2) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v11 = (void *)a2[9];
  if ( v11 )
    ObDereferenceObjectDeferDelete(v11);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v13) = 1;
    CmpLogCheckpoint(a1, v14, v13);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockRegistry();
  }
}
