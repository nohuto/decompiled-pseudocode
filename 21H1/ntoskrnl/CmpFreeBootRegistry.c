/*
 * XREFs of CmpFreeBootRegistry @ 0x1404E8738
 * Callers:
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x140781CA8 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
