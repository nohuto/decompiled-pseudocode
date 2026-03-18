/*
 * XREFs of MiIncreaseCommitLimits @ 0x1403CF51C
 * Callers:
 *     MiInitializeCommitment @ 0x1403CF398 (MiInitializeCommitment.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x14084B418 (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x14096F2D4 (MiExtendPagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x140981A04 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x1403CF630 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x1403CF758 (MiUpdatePageFileList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x1405B3340 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16040), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 16008) + a3) < *(_QWORD *)(a1 + 16008) )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), a2);
      }
      else if ( *(_QWORD *)(a1 + 16056) )
      {
        v13 = MiRestockOverCommit(a1, a2);
        if ( a2 != v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), a2 - v13);
      }
      *(_QWORD *)(a1 + 17496) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 16008) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), 2uLL);
      v10 = *(unsigned int *)(a1 + 16728);
      *(_QWORD *)(a1 + 8 * v10 + 16736) = a5;
      *(_DWORD *)(a1 + 16728) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v8;
}
