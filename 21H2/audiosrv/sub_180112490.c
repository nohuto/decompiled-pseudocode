/*
 * XREFs of sub_180112490 @ 0x180112490
 * Callers:
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800F7C70 @ 0x1800F7C70 (sub_1800F7C70.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 */

__int64 __fastcall sub_180112490(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int16 v6; // [rsp+40h] [rbp-18h]

  v3 = qword_18019E608;
  v6 = 0;
  v5 = 0LL;
  sub_180112550(qword_18019E608, a2, 0, (unsigned int)&v5, a3);
  return sub_180112944(v3, &v5, 0LL);
}
