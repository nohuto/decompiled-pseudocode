/*
 * XREFs of CmpFreeBootRegistry @ 0x1404E8D68
 * Callers:
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14078762C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
