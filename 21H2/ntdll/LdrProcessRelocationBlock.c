/*
 * XREFs of LdrProcessRelocationBlock @ 0x1800E3C00
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockLongLong @ 0x1800849C8 (LdrProcessRelocationBlockLongLong.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return (PIMAGE_BASE_RELOCATION)LdrProcessRelocationBlockLongLong(0x8664u, VA, SizeOfBlock, NextOffset, Diff);
}
