/*
 * XREFs of sub_180106544 @ 0x180106544
 * Callers:
 *     sub_180106FE0 @ 0x180106FE0 (sub_180106FE0.c)
 * Callees:
 *     sub_18010679C @ 0x18010679C (sub_18010679C.c)
 *     sub_180106C78 @ 0x180106C78 (sub_180106C78.c)
 *     sub_18010714C @ 0x18010714C (sub_18010714C.c)
 */

__int64 __fastcall sub_180106544(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_180106C78(Src);
  if ( a3 > 32 )
  {
    sub_18010714C(Src, a2, a4);
    result = sub_18010679C(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_18010679C(Src);
      result = sub_18010679C(a4);
    }
  }
  return result;
}
