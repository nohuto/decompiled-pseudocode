/*
 * XREFs of sub_180108C24 @ 0x180108C24
 * Callers:
 *     sub_180108CE8 @ 0x180108CE8 (sub_180108CE8.c)
 * Callees:
 *     sub_1800E1280 @ 0x1800E1280 (sub_1800E1280.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E1408 @ 0x1800E1408 (sub_1800E1408.c)
 *     sub_1800E1544 @ 0x1800E1544 (sub_1800E1544.c)
 *     sub_1800E1798 @ 0x1800E1798 (sub_1800E1798.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180108C24(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  __int64 v6[22]; // [rsp+20h] [rbp-D8h] BYREF
  int v7; // [rsp+D0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+D8h] [rbp-20h]

  result = sub_1800E1544();
  if ( result )
  {
    result = sub_1800E1798(a2, (__int64)&v7);
    if ( v7 == 2 )
    {
      *a3 = v8;
      sub_1800E1280((__int64)v6);
      sub_1800E1408(a2, v6);
    }
    else
    {
      if ( v7 != 5 )
        return result;
      sub_1800E1280((__int64)v6);
      sub_1800E1408(a2, v6);
    }
    return sub_1800E12F4(v6);
  }
  return result;
}
