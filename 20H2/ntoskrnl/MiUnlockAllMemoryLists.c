/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14038603C
 * Callers:
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140386094 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E3E0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E3F0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
