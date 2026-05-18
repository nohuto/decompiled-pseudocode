/*
 * XREFs of sub_18011CB80 @ 0x18011CB80
 * Callers:
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_180117864 @ 0x180117864 (sub_180117864.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 *     sub_18011AEF0 @ 0x18011AEF0 (sub_18011AEF0.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011C9F8 @ 0x18011C9F8 (sub_18011C9F8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011CB80(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF

  v5[2] = a2;
  sub_18011C9F8(a1 + 64, (__int64)v5, a2);
  v3 = v5[0];
  unknown_libname_101(a2);
  return v3 + 48;
}
