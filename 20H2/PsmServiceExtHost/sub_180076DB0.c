/*
 * XREFs of sub_180076DB0 @ 0x180076DB0
 * Callers:
 *     sub_1800233B4 @ 0x1800233B4 (sub_1800233B4.c)
 *     sub_180035400 @ 0x180035400 (sub_180035400.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007AC0C @ 0x18007AC0C (sub_18007AC0C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180076DB0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v12 = a6;
  v10 = a5;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 8LL;
  v11 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 6u, &v9);
}
