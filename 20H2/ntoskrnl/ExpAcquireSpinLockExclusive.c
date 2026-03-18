/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14027F330
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14023BA10 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14023C370 (RtlpHpVsSubsegmentCommitPages.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402CCAB0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140303360 (MmDoesFileHaveUserWritableReferences.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // ebx
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v12; // rcx
  bool v13; // zf
  unsigned __int32 v14; // eax
  int v15; // eax
  int v16; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[6];
      SchedulerAssist[6] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v12[6] - 1;
        v12[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v9 = *(unsigned int *)a1;
  v10 = v9 & 0xFFFFFFFFBFFFFFFFuLL;
  while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v9 & 0x40000000) == 0 )
    {
      v10 = (unsigned int)v9;
      LODWORD(v10) = v9 | 0x40000000;
      v14 = _InterlockedCompareExchange(a1, v9 | 0x40000000, v9);
      v13 = (_DWORD)v9 == v14;
      v9 = v14;
      if ( !v13 )
        continue;
    }
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v9, a3, a4) )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
    v9 = *(unsigned int *)a1;
  }
  return v6;
}
