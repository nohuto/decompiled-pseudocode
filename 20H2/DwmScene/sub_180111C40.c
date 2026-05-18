/*
 * XREFs of sub_180111C40 @ 0x180111C40
 * Callers:
 *     sub_180112F14 @ 0x180112F14 (sub_180112F14.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_180114720 @ 0x180114720 (sub_180114720.c)
 * Callees:
 *     sub_180111AB8 @ 0x180111AB8 (sub_180111AB8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char __fastcall sub_180111C40(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 23LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1900000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_180111AB8((unsigned __int8 *)&v5, 0x10uLL, a1);
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
