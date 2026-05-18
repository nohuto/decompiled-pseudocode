/*
 * XREFs of sub_18011B490 @ 0x18011B490
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011B490(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v9[6]; // [rsp+20h] [rbp-68h] BYREF

  v9[5] = (__int64)a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001269C(v9, (__int64)a3);
  LODWORD(a1) = sub_180117C08(a1, a2, v9, a4);
  unknown_libname_101(a3);
  return (unsigned int)a1;
}
