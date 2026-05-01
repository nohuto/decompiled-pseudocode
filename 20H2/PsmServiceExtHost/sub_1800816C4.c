/*
 * XREFs of sub_1800816C4 @ 0x1800816C4
 * Callers:
 *     sub_18003D10C @ 0x18003D10C (sub_18003D10C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800816C4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-31h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  __int64 v14; // [rsp+60h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+7Ch] [rbp-5h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]

  v21 = a9;
  v19 = a8;
  v22 = 8LL;
  v20 = 8LL;
  v9 = *(unsigned __int8 *)(*a7 + 1);
  v16 = *a7;
  v18 = 0;
  v15 = 4LL;
  v13 = 4LL;
  v17 = 4 * v9 + 8;
  v14 = a6;
  v12 = a5;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v11);
}
