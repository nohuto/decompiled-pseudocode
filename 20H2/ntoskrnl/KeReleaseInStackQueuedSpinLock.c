/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1402950F0
 * Callers:
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     ExpDeleteWorkerFactory @ 0x14035D9C0 (ExpDeleteWorkerFactory.c)
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     PopFreeIrp @ 0x14037A87C (PopFreeIrp.c)
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F2560 (MiMarkHugePfnGood.c)
 *     MiAddPartitionHugeRange @ 0x140530C98 (MiAddPartitionHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140531D88 (MiReleasePartitionHugeIoSpace.c)
 *     PnprMarkOrMirrorPages @ 0x1409B0FC8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1409B2D94 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rbx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v8; // r10
  _DWORD *v9; // r9
  int v10; // eax
  bool v11; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_8;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
LABEL_8:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v6;
      if ( !v6 )
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
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  __writecr8(OldIrql);
}
