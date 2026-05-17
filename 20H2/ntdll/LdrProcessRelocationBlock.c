/*
 * XREFs of LdrProcessRelocationBlock @ 0x1800E3DB0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockLongLong @ 0x180084688 (LdrProcessRelocationBlockLongLong.c)
 */

unsigned __int16 *__fastcall LdrProcessRelocationBlock(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  return LdrProcessRelocationBlockLongLong(0x8664u, a1, a2, a3, a4);
}
