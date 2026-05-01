/*
 * XREFs of sub_180078D30 @ 0x180078D30
 * Callers:
 *     sub_18000294C @ 0x18000294C (sub_18000294C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180078D30(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v9; // rcx
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+17h]

  v23 = 16LL;
  v21 = 4LL;
  v9 = *a9;
  v20 = a8;
  v22 = v9;
  v10 = *(unsigned __int8 *)(*a7 + 1);
  v17 = *a7;
  v19 = 0;
  v16 = 8LL;
  v14 = 4LL;
  v18 = 4 * v10 + 8;
  v15 = a6;
  v13 = a5;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v12);
}
