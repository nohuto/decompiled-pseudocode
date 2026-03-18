/*
 * XREFs of MiLockAllMemoryLists @ 0x14037F638
 * Callers:
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14037F6CC (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E4B0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E4A0);
}
