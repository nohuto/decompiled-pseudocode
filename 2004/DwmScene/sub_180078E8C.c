/*
 * XREFs of sub_180078E8C @ 0x180078E8C
 * Callers:
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_1800732E0 @ 0x1800732E0 (sub_1800732E0.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_1800789DC @ 0x1800789DC (sub_1800789DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180078E8C(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0LL;
  sub_180061744(a1 + 8, (__int64)&v7);
  v6 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v6);
  for ( i = 0; i < (unsigned int)sub_180075490(a1); ++i )
  {
    v3 = sub_1800753CC(a1, &v5, i);
    sub_1800789DC(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_DWORD *)(a1 + 1372) = 2139095039;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0LL;
  result = (__int64)sub_1800732E0((__int64 **)(a1 + 1424));
  if ( BYTE8(v6) )
    result = sub_180061A3C(v6);
  if ( BYTE8(v7) )
    return sub_180061A3C(v7);
  return result;
}
