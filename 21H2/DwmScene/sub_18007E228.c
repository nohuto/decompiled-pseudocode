/*
 * XREFs of sub_18007E228 @ 0x18007E228
 * Callers:
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 *     sub_1800A1320 @ 0x1800A1320 (sub_1800A1320.c)
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 *     sub_1800CED2C @ 0x1800CED2C (sub_1800CED2C.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800D2380 @ 0x1800D2380 (sub_1800D2380.c)
 *     sub_1800D2EC0 @ 0x1800D2EC0 (sub_1800D2EC0.c)
 *     sub_1800F0754 @ 0x1800F0754 (sub_1800F0754.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_180076DF8 @ 0x180076DF8 (sub_180076DF8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007E228(__int64 a1, _QWORD *a2)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v5);
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  sub_180076DF8(a2, (_QWORD *)(a1 + 88));
  if ( BYTE8(v5) )
    sub_18006730C(v5);
  return a2;
}
