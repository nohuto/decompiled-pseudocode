/*
 * XREFs of sub_18008BEE0 @ 0x18008BEE0
 * Callers:
 *     sub_1800797A4 @ 0x1800797A4 (sub_1800797A4.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18008AE0C @ 0x18008AE0C (sub_18008AE0C.c)
 *     sub_18008B0B8 @ 0x18008B0B8 (sub_18008B0B8.c)
 *     sub_18008D46C @ 0x18008D46C (sub_18008D46C.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008BEE0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)a1 = 0LL;
  v4 = operator new(0xD8uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset(v4, 0, 0xD8uLL);
    v4 = (_QWORD *)sub_18008B0B8(v5, a2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18008AE0C(a1, v4);
  v7 = 0LL;
  sub_180066E3C(*a1 + 16LL, (__int64)&v7);
  sub_18008D46C(*a1);
  if ( BYTE8(v7) )
    sub_180067304(v7);
  return a1;
}
