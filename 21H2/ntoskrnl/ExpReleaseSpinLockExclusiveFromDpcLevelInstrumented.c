/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     ExReleaseSpinLockExclusive @ 0x140346A40 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
