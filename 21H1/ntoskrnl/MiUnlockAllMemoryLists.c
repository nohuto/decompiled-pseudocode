/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14037F674
 * Callers:
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14037F6CC (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E4A0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E4B0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
