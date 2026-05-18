/*
 * XREFs of sub_180062590 @ 0x180062590
 * Callers:
 *     sub_180063960 @ 0x180063960 (sub_180063960.c)
 *     sub_18008C920 @ 0x18008C920 (sub_18008C920.c)
 *     sub_180092530 @ 0x180092530 (sub_180092530.c)
 *     sub_18009ACD0 @ 0x18009ACD0 (sub_18009ACD0.c)
 *     sub_18009B9E0 @ 0x18009B9E0 (sub_18009B9E0.c)
 *     sub_1800C92D0 @ 0x1800C92D0 (sub_1800C92D0.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800CCC60 @ 0x1800CCC60 (sub_1800CCC60.c)
 *     sub_1800CD510 @ 0x1800CD510 (sub_1800CD510.c)
 * Callees:
 *     sub_180062AD4 @ 0x180062AD4 (sub_180062AD4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180062590(__int64 a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  return sub_180062AD4(a1 + 80, &v3);
}
