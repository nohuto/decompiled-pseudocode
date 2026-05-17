/*
 * XREFs of _LdrProcessRelocationBlockEx@20 @ 0x4B342780
 * Callers:
 *     <none>
 * Callees:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 */

int __stdcall LdrProcessRelocationBlockEx(int a1, int a2, int a3, int a4, int a5)
{
  return LdrProcessRelocationBlockLongLong(a3, a4, a5, a5 >> 31);
}
