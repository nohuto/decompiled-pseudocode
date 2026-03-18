/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1402BF800
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     ExpDeleteWorkerFactory @ 0x14027A8F0 (ExpDeleteWorkerFactory.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x140378B4C (PopFreeIrp.c)
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403EE0F8 (MiMarkHugePfnGood.c)
 *     MiAddPartitionHugeRange @ 0x14052D2C8 (MiAddPartitionHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x14052E3B8 (MiReleasePartitionHugeIoSpace.c)
 *     PnprMarkOrMirrorPages @ 0x1409AB058 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1409ACE24 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rbx
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
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
    Next = KxWaitForLockChainValid((__int64 *)LockHandle, v1, v2, v3);
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
      v9 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v9;
      if ( !v9 )
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
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(OldIrql);
}
