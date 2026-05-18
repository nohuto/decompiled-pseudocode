/*
 * XREFs of sub_1800870D4 @ 0x1800870D4
 * Callers:
 *     sub_1800BCC2C @ 0x1800BCC2C (sub_1800BCC2C.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180087160 @ 0x180087160 (sub_180087160.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800870D4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF

  v9[4] = a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001269C(v9, (__int64)a3);
  v6 = sub_180087518(a1, v8, v9);
  sub_180087160(a1, a2, v6);
  unknown_libname_101(a3);
  return a2;
}
