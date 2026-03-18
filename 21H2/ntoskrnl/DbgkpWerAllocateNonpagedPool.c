/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x140540B20
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14092BEF8 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
