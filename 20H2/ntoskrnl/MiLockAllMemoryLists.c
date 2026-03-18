/*
 * XREFs of MiLockAllMemoryLists @ 0x140386000
 * Callers:
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140386094 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E3F0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E3E0);
}
