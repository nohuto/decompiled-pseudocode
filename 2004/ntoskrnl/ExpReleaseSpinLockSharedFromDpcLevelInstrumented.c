/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0844
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ExpAddTagForBigPages @ 0x14028F100 (ExpAddTagForBigPages.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockShared @ 0x140326F00 (ExReleaseSpinLockShared.c)
 *     MiAllocateCombineProto @ 0x140365B80 (MiAllocateCombineProto.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A5F9C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
