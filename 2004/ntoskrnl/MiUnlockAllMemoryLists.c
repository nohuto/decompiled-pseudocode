/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140383F0C
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140383F64 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E360);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E370);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
