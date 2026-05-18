/*
 * XREFs of sub_180073BBC @ 0x180073BBC
 * Callers:
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 * Callees:
 *     sub_18006D30C @ 0x18006D30C (sub_18006D30C.c)
 *     sub_180070D38 @ 0x180070D38 (sub_180070D38.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180073BBC(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-30h] BYREF

  v8 = a3;
  v7 = a4;
  *(_OWORD *)a2 = 0LL;
  sub_180070D38((__int64)a2, a1, &v8, &v7);
  sub_18006D30C(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
