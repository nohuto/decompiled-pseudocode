/*
 * XREFs of sub_18006A72C @ 0x18006A72C
 * Callers:
 *     sub_1800053EC @ 0x1800053EC (sub_1800053EC.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 *     sub_180020AD0 @ 0x180020AD0 (sub_180020AD0.c)
 *     sub_180070AA0 @ 0x180070AA0 (sub_180070AA0.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18006A72C(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 8;
  v13 = 0;
  v8 = a5;
  v9 = 8;
  v10 = 0;
  return sub_18002E278(a1, a2, 0LL, 0LL, 4u, &v7);
}
