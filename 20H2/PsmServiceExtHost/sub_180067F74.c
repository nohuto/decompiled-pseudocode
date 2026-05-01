/*
 * XREFs of sub_180067F74 @ 0x180067F74
 * Callers:
 *     sub_180004CDC @ 0x180004CDC (sub_180004CDC.c)
 *     sub_1800255FC @ 0x1800255FC (sub_1800255FC.c)
 *     sub_1800380E0 @ 0x1800380E0 (sub_1800380E0.c)
 *     sub_180068B10 @ 0x180068B10 (sub_180068B10.c)
 *     sub_180068C98 @ 0x180068C98 (sub_180068C98.c)
 *     sub_18007B7A0 @ 0x18007B7A0 (sub_18007B7A0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180067F74(
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
  v14 = 8LL;
  v12 = 4LL;
  v10 = 4LL;
  return sub_18002E278(a1, a2, 0LL, 0LL, 5u, &v8);
}
