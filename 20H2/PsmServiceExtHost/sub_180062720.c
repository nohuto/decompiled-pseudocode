/*
 * XREFs of sub_180062720 @ 0x180062720
 * Callers:
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_180025BD4 @ 0x180025BD4 (sub_180025BD4.c)
 *     sub_1800678A8 @ 0x1800678A8 (sub_1800678A8.c)
 *     sub_18006AFB0 @ 0x18006AFB0 (sub_18006AFB0.c)
 *     sub_180073D58 @ 0x180073D58 (sub_180073D58.c)
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180062720(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 4LL;
  v12 = 8LL;
  v10 = 4LL;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v8);
}
