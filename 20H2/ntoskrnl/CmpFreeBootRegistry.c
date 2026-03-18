/*
 * XREFs of CmpFreeBootRegistry @ 0x1404EC5F8
 * Callers:
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14079533C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
