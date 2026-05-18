/*
 * XREFs of sub_1800ACC40 @ 0x1800ACC40
 * Callers:
 *     sub_1800ACB54 @ 0x1800ACB54 (sub_1800ACB54.c)
 * Callees:
 *     sub_1800AA1F8 @ 0x1800AA1F8 (sub_1800AA1F8.c)
 */

__int64 __fastcall sub_1800ACC40(__int64 a1, __int64 a2, __int128 *a3, int a4, int a5, int a6)
{
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = *a3;
  sub_1800AA1F8(a1, a2, (__int64)&v8, 0LL, a4, a5, 0LL, a6);
  return a2;
}
