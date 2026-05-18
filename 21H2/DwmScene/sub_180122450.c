/*
 * XREFs of sub_180122450 @ 0x180122450
 * Callers:
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 *     sub_1801207C0 @ 0x1801207C0 (sub_1801207C0.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1801222C8 @ 0x1801222C8 (sub_1801222C8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180122450(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF

  v5[2] = a2;
  sub_1801222C8(a1 + 64, (__int64)v5, a2);
  v3 = v5[0];
  unknown_libname_103(a2);
  return v3 + 48;
}
