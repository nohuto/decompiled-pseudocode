/*
 * XREFs of sub_1800D2530 @ 0x1800D2530
 * Callers:
 *     sub_1800F7EC8 @ 0x1800F7EC8 (sub_1800F7EC8.c)
 * Callees:
 *     sub_180067E60 @ 0x180067E60 (sub_180067E60.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D2530(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_180069518((__int64 *)(a1 + 144), (unsigned int *)&v5);
  return sub_180067E60(a1, a2);
}
