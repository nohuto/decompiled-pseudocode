/*
 * XREFs of sub_1800DA9D4 @ 0x1800DA9D4
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 * Callees:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800DA9D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (byte_18019F980 & 0x20) != 0 )
      return sub_18000F730(a1, (__int64)"~", a3, 1LL, (__int64)v4);
  }
  return result;
}
