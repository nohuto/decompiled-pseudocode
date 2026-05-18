/*
 * XREFs of sub_180105DF4 @ 0x180105DF4
 * Callers:
 *     sub_1801060C8 @ 0x1801060C8 (sub_1801060C8.c)
 * Callees:
 *     sub_180106004 @ 0x180106004 (sub_180106004.c)
 */

__int64 __fastcall sub_180105DF4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp

  v3 = a3;
  v4 = (a3 - a1) >> 4;
  v5 = a2;
  if ( v4 > 40 )
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_180106004(a1, v7 + a1, v6 + a1);
    sub_180106004(v5 - v7, v5, v7 + v5);
    sub_180106004(v3 - v6, v3 - v7, v3);
    a3 = v3 - v7;
    a2 = v5;
    a1 = v8;
  }
  return sub_180106004(a1, a2, a3);
}
