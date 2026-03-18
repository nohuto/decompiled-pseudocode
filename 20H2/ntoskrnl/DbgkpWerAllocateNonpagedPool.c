/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1404ED0E8
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14088BE08 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
