/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x140583408
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockDynamicMemoryNestedExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C55040, 0LL);
}
