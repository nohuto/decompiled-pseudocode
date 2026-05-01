/*
 * XREFs of sub_180067C18 @ 0x180067C18
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180067C18(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  int v6; // eax
  int v7; // eax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v6 = *(unsigned __int8 *)(*a6 + 1);
  v15 = *a6;
  v16 = 4 * v6 + 8;
  v17 = 0;
  v11 = 2LL;
  v12 = *a5;
  v7 = 4 * *((unsigned __int16 *)a5 + 4);
  v10 = a5 + 1;
  v13 = v7;
  v14 = 0;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v9);
}
