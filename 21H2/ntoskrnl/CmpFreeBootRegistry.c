/*
 * XREFs of CmpFreeBootRegistry @ 0x1404EE118
 * Callers:
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14079FA5C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
