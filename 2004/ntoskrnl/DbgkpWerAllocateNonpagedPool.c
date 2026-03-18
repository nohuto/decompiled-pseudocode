/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1404E9858
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1408862B8 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
