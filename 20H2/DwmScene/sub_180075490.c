/*
 * XREFs of sub_180075490 @ 0x180075490
 * Callers:
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_180078E8C @ 0x180078E8C (sub_180078E8C.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075490(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  if ( BYTE8(v4) )
    sub_180061A3C(v4);
  return (unsigned int)v2;
}
