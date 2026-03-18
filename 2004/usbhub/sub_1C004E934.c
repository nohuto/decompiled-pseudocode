/*
 * XREFs of sub_1C004E934 @ 0x1C004E934
 * Callers:
 *     sub_1C004F72C @ 0x1C004F72C (sub_1C004F72C.c)
 * Callees:
 *     sub_1C004E9B4 @ 0x1C004E9B4 (sub_1C004E9B4.c)
 *     sub_1C004EA10 @ 0x1C004EA10 (sub_1C004EA10.c)
 */

__int64 __fastcall sub_1C004E934(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = sub_1C004EA10(a1, a2 >> 1, &v9);
    if ( v3 >= 0 )
      return (unsigned int)sub_1C004E9B4(a1 + 2 * v9, v7 - v9, v6, a3);
  }
  return (unsigned int)v3;
}
