/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExpAddTagForBigPages @ 0x140252860 (ExpAddTagForBigPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     ExReleaseSpinLockShared @ 0x1402ED5D0 (ExReleaseSpinLockShared.c)
 *     MiAllocateCombineProto @ 0x1403651C0 (MiAllocateCombineProto.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A58AC (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
