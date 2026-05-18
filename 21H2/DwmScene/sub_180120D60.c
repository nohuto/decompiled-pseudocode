/*
 * XREFs of sub_180120D60 @ 0x180120D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180120D60(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v9[6]; // [rsp+20h] [rbp-68h] BYREF

  v9[5] = (__int64)a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001277C(v9, (__int64)a3);
  LODWORD(a1) = sub_18011D4D8(a1, a2, v9, a4);
  unknown_libname_103(a3);
  return (unsigned int)a1;
}
