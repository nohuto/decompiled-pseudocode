/*
 * XREFs of sub_1800D5398 @ 0x1800D5398
 * Callers:
 *     sub_1800D5614 @ 0x1800D5614 (sub_1800D5614.c)
 * Callees:
 *     sub_1800D5550 @ 0x1800D5550 (sub_1800D5550.c)
 */

__int64 __fastcall sub_1800D5398(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp

  v4 = (a3 - a1) >> 4;
  if ( v4 <= 40 )
  {
    v8 = a1;
    v9 = a3;
  }
  else
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_1800D5550(a1, v7 + a1, v6 + a1);
    sub_1800D5550(a2 - v7, a2, v7 + a2);
    v9 = a3 - v7;
    sub_1800D5550(a3 - v6, a3 - v7, a3);
  }
  return sub_1800D5550(v8, a2, v9);
}
