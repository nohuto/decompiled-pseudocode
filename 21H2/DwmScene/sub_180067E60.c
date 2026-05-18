/*
 * XREFs of sub_180067E60 @ 0x180067E60
 * Callers:
 *     sub_180069230 @ 0x180069230 (sub_180069230.c)
 *     sub_1800921F0 @ 0x1800921F0 (sub_1800921F0.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_1800A05A0 @ 0x1800A05A0 (sub_1800A05A0.c)
 *     sub_1800A12B0 @ 0x1800A12B0 (sub_1800A12B0.c)
 *     sub_1800CEBA0 @ 0x1800CEBA0 (sub_1800CEBA0.c)
 *     sub_1800D1030 @ 0x1800D1030 (sub_1800D1030.c)
 *     sub_1800D2530 @ 0x1800D2530 (sub_1800D2530.c)
 *     sub_1800D2DE0 @ 0x1800D2DE0 (sub_1800D2DE0.c)
 * Callees:
 *     sub_1800683A4 @ 0x1800683A4 (sub_1800683A4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180067E60(__int64 a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  return sub_1800683A4(a1 + 80, &v3);
}
