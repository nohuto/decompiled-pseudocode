/*
 * XREFs of CmpFreeBootRegistry @ 0x1404EDED8
 * Callers:
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14079F85C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
