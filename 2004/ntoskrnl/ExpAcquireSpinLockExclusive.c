/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x1402135A0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140221C10 (MiGetVadWakeList.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402DBFD0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14032FF70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
