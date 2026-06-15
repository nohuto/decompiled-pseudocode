/*
 * XREFs of sub_180112500 @ 0x180112500
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 */

__int64 __fastcall sub_180112500(int a1, int a2, int a3)
{
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+40h] [rbp-18h]

  v5 = 0;
  v4 = 0LL;
  return sub_180112CEC(a1, a2, a3, 1, (__int64)&v4);
}
