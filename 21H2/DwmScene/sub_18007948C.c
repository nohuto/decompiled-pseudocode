/*
 * XREFs of sub_18007948C @ 0x18007948C
 * Callers:
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 * Callees:
 *     sub_180072BDC @ 0x180072BDC (sub_180072BDC.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007948C(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-30h] BYREF

  v8 = a3;
  v7 = a4;
  *(_OWORD *)a2 = 0LL;
  sub_180076608((__int64)a2, a1, &v8, &v7);
  sub_180072BDC(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
