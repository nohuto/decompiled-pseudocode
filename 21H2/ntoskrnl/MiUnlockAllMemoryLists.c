/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140384198
 * Callers:
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1403841F0 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E560);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E570);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
