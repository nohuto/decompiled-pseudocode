/*
 * XREFs of _LdrProcessRelocationBlock@16 @ 0x4B342750
 * Callers:
 *     <none>
 * Callees:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 */

int __stdcall LdrProcessRelocationBlock(int a1, int a2, int a3, int a4)
{
  return LdrProcessRelocationBlockLongLong(a2, a3, a4, a4 >> 31);
}
