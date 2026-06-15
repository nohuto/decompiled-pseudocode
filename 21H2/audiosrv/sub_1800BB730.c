/*
 * XREFs of sub_1800BB730 @ 0x1800BB730
 * Callers:
 *     sub_1800BC404 @ 0x1800BC404 (sub_1800BC404.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BB730(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 8LL;
  v8[7] = 8LL;
  v8[5] = 8LL;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 5, (__int64)v8);
}
