/*
 * XREFs of sub_1800776F0 @ 0x1800776F0
 * Callers:
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006FB40 @ 0x18006FB40 (sub_18006FB40.c)
 *     sub_18007BA38 @ 0x18007BA38 (sub_18007BA38.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800776F0(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0LL;
  sub_1800615B4(a1 + 808, (__int64)&v3);
  sub_18006FB40((__int64 *)(a1 + 888), *(char **)(a1 + 896), *(char **)(a1 + 864), *(char **)(a1 + 872));
  result = sub_18007BA38(a1 + 864);
  if ( BYTE8(v3) )
    return sub_180061A34(v3);
  return result;
}
