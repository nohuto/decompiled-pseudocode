/*
 * XREFs of MiLockAllMemoryLists @ 0x14038415C
 * Callers:
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1403841F0 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E570);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E560);
}
