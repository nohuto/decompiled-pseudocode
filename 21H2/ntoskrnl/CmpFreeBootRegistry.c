/*
 * XREFs of CmpFreeBootRegistry @ 0x140540010
 * Callers:
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14083D398 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
