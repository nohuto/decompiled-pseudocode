/*
 * XREFs of sub_18009B9E0 @ 0x18009B9E0
 * Callers:
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800F25F8 @ 0x1800F25F8 (sub_1800F25F8.c)
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18009B9E0(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_180063C48((__int64 *)(a1 + 128), (unsigned int *)&v5);
  return sub_180062590(a1, a2);
}
