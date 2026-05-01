/*
 * XREFs of sub_1800030B4 @ 0x1800030B4
 * Callers:
 *     sub_180017EA0 @ 0x180017EA0 (sub_180017EA0.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180027B54 @ 0x180027B54 (sub_180027B54.c)
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 *     sub_180070CC0 @ 0x180070CC0 (sub_180070CC0.c)
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800030B4(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v10 = 0;
  v9 = 8;
  return sub_18002E278(a1, a2, 0, 0, 4u, &v7);
}
