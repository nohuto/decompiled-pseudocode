/*
 * XREFs of sub_1800E9618 @ 0x1800E9618
 * Callers:
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E9618(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[9] = 4LL;
  v8[7] = 16LL;
  v8[5] = 16LL;
  v8[6] = *a6;
  v8[4] = *a5;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 5, (__int64)v8);
}
