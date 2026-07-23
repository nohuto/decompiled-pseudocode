/*
 * XREFs of MiUnlockAllMemoryLists @ 0x1403842E8
 * Callers:
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140384340 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E5A0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E5B0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
