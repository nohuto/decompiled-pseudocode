/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1404EEC08
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140889508 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
