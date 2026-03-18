/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1402DAA90
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     ExpDeleteWorkerFactory @ 0x1402DA9E0 (ExpDeleteWorkerFactory.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x140377D3C (PopFreeIrp.c)
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     MiAddPartitionHugeRange @ 0x14052CC78 (MiAddPartitionHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x14052DD68 (MiReleasePartitionHugeIoSpace.c)
 *     PnprMarkOrMirrorPages @ 0x1409AA1F8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1409ABFC4 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  char v1; // dl
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rbx
  int v7; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = (__int64)LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_8;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = KxWaitForLockChainValid(LockHandle, v1);
LABEL_8:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v7;
      if ( !v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(OldIrql);
}
