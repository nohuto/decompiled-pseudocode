/*
 * XREFs of sub_1800B2510 @ 0x1800B2510
 * Callers:
 *     sub_1800B2424 @ 0x1800B2424 (sub_1800B2424.c)
 * Callees:
 *     sub_1800AFAC8 @ 0x1800AFAC8 (sub_1800AFAC8.c)
 */

__int64 __fastcall sub_1800B2510(__int64 a1, __int64 a2, __int128 *a3, int a4, int a5, int a6)
{
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = *a3;
  sub_1800AFAC8(a1, a2, (__int64)&v8, 0LL, a4, a5, 0LL, a6);
  return a2;
}
