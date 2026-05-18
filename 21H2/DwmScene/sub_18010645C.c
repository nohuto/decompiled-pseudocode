/*
 * XREFs of sub_18010645C @ 0x18010645C
 * Callers:
 *     sub_180106F00 @ 0x180106F00 (sub_180106F00.c)
 * Callees:
 *     sub_180106720 @ 0x180106720 (sub_180106720.c)
 *     sub_180106C18 @ 0x180106C18 (sub_180106C18.c)
 *     sub_1801070C0 @ 0x1801070C0 (sub_1801070C0.c)
 */

__int64 __fastcall sub_18010645C(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_180106C18(Src);
  if ( a3 > 32 )
  {
    sub_1801070C0(Src, a2, a4);
    result = sub_180106720(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180106720(Src);
      result = sub_180106720(a4);
    }
  }
  return result;
}
