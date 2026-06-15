/*
 * XREFs of sub_180139510 @ 0x180139510
 * Callers:
 *     sub_18013A430 @ 0x18013A430 (sub_18013A430.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 */

__int64 __fastcall sub_180139510(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( !*(_QWORD *)a1 && !sub_180107110(a1, *(_DWORD *)(a1 + 16), 1) )
    sub_1800B8610(-2147024882);
  return sub_180139E98(a1, a2, a3, a4);
}
