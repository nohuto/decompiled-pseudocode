/*
 * XREFs of MiLockAllMemoryLists @ 0x140383ED0
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140383F64 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E370);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E360);
}
