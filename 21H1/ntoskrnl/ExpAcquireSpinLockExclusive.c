/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14026C5F0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D3F0 (RtlpHpVsChunkSplit.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402AFF30 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F3370 (MmDoesFileHaveUserWritableReferences.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14035E600 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14035E9F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, _DWORD *a4)
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
    v6 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)a1, a2, a3, a4);
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
