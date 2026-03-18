/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14023BA10 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14023C370 (RtlpHpVsSubsegmentCommitPages.c)
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MmGetControlAreaPartition @ 0x1402B5D60 (MmGetControlAreaPartition.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402CCAB0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140303360 (MmDoesFileHaveUserWritableReferences.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x1405A99C8 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // ebp
  char v7; // di
  unsigned __int64 v8; // rax
  int InterruptCount; // esi
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  LOBYTE(a3) = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v8;
  }
  else
  {
    v7 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = ExpAcquireSpinLockExclusive(a1, a2, a3, a4);
  v11 = v10;
  if ( v10 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  }
  if ( v7 )
  {
    v12 = __rdtsc();
    LOBYTE(v10) = PerfLogSpinLockAcquire((__int64)a1, v12, v12 - v5, v11, InterruptCount, 3);
  }
  return v10;
}
