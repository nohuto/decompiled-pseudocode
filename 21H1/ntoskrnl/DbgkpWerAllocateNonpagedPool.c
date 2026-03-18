/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1404E9228
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140884F98 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
