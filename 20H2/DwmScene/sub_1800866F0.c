/*
 * XREFs of sub_1800866F0 @ 0x1800866F0
 * Callers:
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18008553C @ 0x18008553C (sub_18008553C.c)
 *     sub_180085900 @ 0x180085900 (sub_180085900.c)
 *     sub_180087B9C @ 0x180087B9C (sub_180087B9C.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800866F0(_QWORD *a1, __int64 a2, unsigned int a3)
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
    v6 = (_QWORD *)sub_180085900(v7, a2, a3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18008553C(a1, v6);
  v9 = 0LL;
  sub_18006156C(*a1 + 16LL, (__int64)&v9);
  sub_180087B9C(*a1);
  if ( BYTE8(v9) )
    sub_180061A34(v9);
  return a1;
}
