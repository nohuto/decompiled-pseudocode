/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140221C10 (MiGetVadWakeList.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402DBFD0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14032FF70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5F28 (PerfLogSpinLockAcquire.c)
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
