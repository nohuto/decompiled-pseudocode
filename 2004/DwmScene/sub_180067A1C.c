/*
 * XREFs of sub_180067A1C @ 0x180067A1C
 * Callers:
 *     sub_180124B5C @ 0x180124B5C (sub_180124B5C.c)
 *     sub_180127FC8 @ 0x180127FC8 (sub_180127FC8.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 */

__int64 *__fastcall sub_180067A1C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 17;
    do
    {
      sub_1800646EC(v4, (__int64)v4);
      v4 += 19;
      result = v4 - 17;
    }
    while ( v4 - 17 != a3 );
  }
  return result;
}
