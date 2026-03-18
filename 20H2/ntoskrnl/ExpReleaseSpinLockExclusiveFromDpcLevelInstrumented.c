/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14023C370 (RtlpHpVsSubsegmentCommitPages.c)
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MmGetControlAreaPartition @ 0x1402B5D60 (MmGetControlAreaPartition.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402CCAB0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     ExReleaseSpinLockExclusive @ 0x140302B30 (ExReleaseSpinLockExclusive.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A9A3C (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
