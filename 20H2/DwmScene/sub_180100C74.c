/*
 * XREFs of sub_180100C74 @ 0x180100C74
 * Callers:
 *     sub_180101710 @ 0x180101710 (sub_180101710.c)
 * Callees:
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_1801013A8 @ 0x1801013A8 (sub_1801013A8.c)
 *     sub_18010187C @ 0x18010187C (sub_18010187C.c)
 */

__int64 __fastcall sub_180100C74(void *Src, __int64 a2, __int64 a3, void *a4)
{
  __int64 result; // rax
  __int64 i; // rsi

  result = sub_1801013A8(Src);
  if ( a3 > 32 )
  {
    sub_18010187C(Src, a2, a4);
    result = sub_180100ECC(a4);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_180100ECC(Src);
      result = sub_180100ECC(a4);
    }
  }
  return result;
}
