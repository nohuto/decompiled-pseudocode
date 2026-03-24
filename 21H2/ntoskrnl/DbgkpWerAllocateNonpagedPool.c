/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1404EE9C8
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1408893A8 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
