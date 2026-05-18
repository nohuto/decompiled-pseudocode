/*
 * XREFs of sub_18007AD60 @ 0x18007AD60
 * Callers:
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AE8C @ 0x18007AE8C (sub_18007AE8C.c)
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18007E75C @ 0x18007E75C (sub_18007E75C.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007AD60(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  if ( BYTE8(v4) )
    sub_18006730C(v4);
  return (unsigned int)v2;
}
