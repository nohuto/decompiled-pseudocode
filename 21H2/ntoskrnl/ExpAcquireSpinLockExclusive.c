/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14030F870
 * Callers:
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiRemoveDecayClusterTimer @ 0x1402E4D70 (MiRemoveDecayClusterTimer.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140350070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14036E550 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14036E5F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(int *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // ebx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6];
      SchedulerAssist[6] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6] - 1;
        v10[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v12 = (unsigned int)*a1;
  v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
  if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, a3, a4) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
      v12 = (unsigned int)*a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
  }
  return v6;
}
