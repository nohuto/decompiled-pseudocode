/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4
 * Callers:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     RtlpHpVsChunkSplit @ 0x14024D3F0 (RtlpHpVsChunkSplit.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402AFF30 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     ExReleaseSpinLockExclusive @ 0x1402F3180 (ExReleaseSpinLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14035E770 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14035E9F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A58AC (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
