/*
 * XREFs of sub_18008BFC0 @ 0x18008BFC0
 * Callers:
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18008AE0C @ 0x18008AE0C (sub_18008AE0C.c)
 *     sub_18008B1D0 @ 0x18008B1D0 (sub_18008B1D0.c)
 *     sub_18008D46C @ 0x18008D46C (sub_18008D46C.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008BFC0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF

  *(_OWORD *)a1 = 0LL;
  v6 = operator new(0xD8uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    memset(v6, 0, 0xD8uLL);
    v6 = (_QWORD *)sub_18008B1D0(v7, a2, a3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18008AE0C(a1, v6);
  v9 = 0LL;
  sub_180066E3C(*a1 + 16LL, (__int64)&v9);
  sub_18008D46C(*a1);
  if ( BYTE8(v9) )
    sub_180067304(v9);
  return a1;
}
