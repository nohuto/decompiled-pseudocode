/*
 * XREFs of sub_18007E75C @ 0x18007E75C
 * Callers:
 *     sub_18007E850 @ 0x18007E850 (sub_18007E850.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_180078BB0 @ 0x180078BB0 (sub_180078BB0.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007E2AC @ 0x18007E2AC (sub_18007E2AC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007E75C(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0LL;
  sub_180067014(a1 + 8, (__int64)&v7);
  v6 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v6);
  for ( i = 0; i < (unsigned int)sub_18007AD60(a1); ++i )
  {
    v3 = sub_18007AC9C(a1, &v5, i);
    sub_18007E2AC(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_DWORD *)(a1 + 1372) = 2139095039;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0LL;
  result = (__int64)sub_180078BB0((__int64 **)(a1 + 1424));
  if ( BYTE8(v6) )
    result = sub_18006730C(v6);
  if ( BYTE8(v7) )
    return sub_18006730C(v7);
  return result;
}
