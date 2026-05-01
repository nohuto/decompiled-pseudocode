/*
 * XREFs of sub_180076698 @ 0x180076698
 * Callers:
 *     sub_1800767F0 @ 0x1800767F0 (sub_1800767F0.c)
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180076698(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v13 = 0;
  v12 = 4;
  v8 = a5;
  v10 = 0;
  v9 = 1;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 4u, &v7);
}
