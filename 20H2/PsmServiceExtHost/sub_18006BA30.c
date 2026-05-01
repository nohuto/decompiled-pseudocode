/*
 * XREFs of sub_18006BA30 @ 0x18006BA30
 * Callers:
 *     sub_180041114 @ 0x180041114 (sub_180041114.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18006BA30(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v12 = 2LL;
  v13 = *a6;
  v6 = 8 * *((unsigned __int16 *)a6 + 4);
  v11 = a6 + 1;
  v14 = v6;
  v9 = a5;
  v15 = 0;
  v10 = 4LL;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v8);
}
