/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC
 * Callers:
 *     ExReleaseSpinLockShared @ 0x140210210 (ExReleaseSpinLockShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     MiAllocateCombineProto @ 0x140367FC0 (MiAllocateCombineProto.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
