/*
 * XREFs of MiIncreaseCommitLimits @ 0x1403BFBD8
 * Callers:
 *     MiInitializeCommitment @ 0x1403BFA54 (MiInitializeCommitment.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x1408D0790 (MiExtendPagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DB250 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x1403BFCEC (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x1403BFED8 (MiUpdatePageFileList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140550954 (MiRestockOverCommit.c)
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6248), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 6216) + a3) < *(_QWORD *)(a1 + 6216) )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7464), a2);
      }
      else if ( *(_QWORD *)(a1 + 6264) )
      {
        v13 = MiRestockOverCommit(a1, a2);
        if ( a2 != v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7464), a2 - v13);
      }
      *(_QWORD *)(a1 + 7592) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 6216) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7464), 2uLL);
      v10 = *(unsigned int *)(a1 + 6936);
      *(_QWORD *)(a1 + 8 * v10 + 6944) = a5;
      *(_DWORD *)(a1 + 6936) = v10 + 1;
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
