/*
 * XREFs of sub_18007CFC0 @ 0x18007CFC0
 * Callers:
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180075410 @ 0x180075410 (sub_180075410.c)
 *     sub_180081308 @ 0x180081308 (sub_180081308.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007CFC0(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0LL;
  sub_180066E84(a1 + 808, (__int64)&v3);
  sub_180075410((__int64 *)(a1 + 888), *(char **)(a1 + 896), *(char **)(a1 + 864), *(char **)(a1 + 872));
  result = sub_180081308(a1 + 864);
  if ( BYTE8(v3) )
    return sub_180067304(v3);
  return result;
}
