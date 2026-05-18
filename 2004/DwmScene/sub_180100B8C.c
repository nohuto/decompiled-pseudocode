/*
 * XREFs of sub_180100B8C @ 0x180100B8C
 * Callers:
 *     sub_180101630 @ 0x180101630 (sub_180101630.c)
 * Callees:
 *     sub_180100E50 @ 0x180100E50 (sub_180100E50.c)
 *     sub_180101348 @ 0x180101348 (sub_180101348.c)
 *     sub_1801017F0 @ 0x1801017F0 (sub_1801017F0.c)
 */

__int64 __fastcall sub_180100B8C(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_180101348(Src);
  if ( a3 > 32 )
  {
    sub_1801017F0(Src, a2, a4);
    result = sub_180100E50(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180100E50(Src);
      result = sub_180100E50(a4);
    }
  }
  return result;
}
