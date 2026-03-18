/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402DC140 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     ExReleaseSpinLockExclusive @ 0x14032EF20 (ExReleaseSpinLockExclusive.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A5F9C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
