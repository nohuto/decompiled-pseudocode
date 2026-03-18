/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18
 * Callers:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x14024D3F0 (RtlpHpVsChunkSplit.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402AFF30 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F3370 (MmDoesFileHaveUserWritableReferences.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14035E600 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14035E9F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5838 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        _DWORD *a4)
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
