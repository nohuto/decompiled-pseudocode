/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiRemoveDecayClusterTimer @ 0x1402E4D70 (MiRemoveDecayClusterTimer.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     MiAgePte @ 0x140332110 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140350070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14036E550 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14036E5F0 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x140632C48 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(
        int *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // ebp
  int v6; // r14d
  char v7; // di
  unsigned __int64 v8; // rax
  unsigned int InterruptCount; // esi
  __int64 result; // rax
  int v11; // r9d
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  LOBYTE(a3) = a2;
  v6 = (int)a1;
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
  result = ExpAcquireSpinLockExclusive(a1, a2, a3, a4);
  v11 = result;
  if ( (_DWORD)result )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v7 )
  {
    v12 = __rdtsc();
    return PerfLogSpinLockAcquire(v6, v12, (int)v12 - v5, v11, InterruptCount, 3);
  }
  return result;
}
