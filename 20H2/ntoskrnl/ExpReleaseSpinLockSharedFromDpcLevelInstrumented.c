/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4
 * Callers:
 *     ExpAddTagForBigPages @ 0x140211B40 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     ExReleaseSpinLockShared @ 0x1402F6620 (ExReleaseSpinLockShared.c)
 *     MiAllocateCombineProto @ 0x140367B60 (MiAllocateCombineProto.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405A9A3C (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
