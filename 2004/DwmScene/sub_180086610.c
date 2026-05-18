/*
 * XREFs of sub_180086610 @ 0x180086610
 * Callers:
 *     sub_180073ED4 @ 0x180073ED4 (sub_180073ED4.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18008553C @ 0x18008553C (sub_18008553C.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 *     sub_180087B9C @ 0x180087B9C (sub_180087B9C.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180086610(_QWORD *a1, __int64 a2)
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
    v4 = (_QWORD *)sub_1800857E8(v5, a2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18008553C(a1, v4);
  v7 = 0LL;
  sub_18006156C(*a1 + 16LL, (__int64)&v7);
  sub_180087B9C(*a1);
  if ( BYTE8(v7) )
    sub_180061A34(v7);
  return a1;
}
