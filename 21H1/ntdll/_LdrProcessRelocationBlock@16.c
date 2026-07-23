/*
 * XREFs of _LdrProcessRelocationBlock@16 @ 0x4B342750
 * Callers:
 *     <none>
 * Callees:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return (PIMAGE_BASE_RELOCATION)LdrProcessRelocationBlockLongLong(
                                   HIDWORD(VA),
                                   SizeOfBlock,
                                   NextOffset,
                                   (int)NextOffset >> 31);
}
