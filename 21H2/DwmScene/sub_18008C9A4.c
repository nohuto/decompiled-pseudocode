/*
 * XREFs of sub_18008C9A4 @ 0x18008C9A4
 * Callers:
 *     sub_1800C24FC @ 0x1800C24FC (sub_1800C24FC.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18008CA30 @ 0x18008CA30 (sub_18008CA30.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008C9A4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF

  v9[4] = a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001277C(v9, (__int64)a3);
  v6 = sub_18008CDE8(a1, v8, v9);
  sub_18008CA30(a1, a2, v6);
  unknown_libname_103(a3);
  return a2;
}
