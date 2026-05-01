/*
 * XREFs of sub_180071184 @ 0x180071184
 * Callers:
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180071184(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-89h] BYREF
  __int64 v12; // [rsp+50h] [rbp-69h]
  __int64 v13; // [rsp+58h] [rbp-61h]
  __int64 v14; // [rsp+60h] [rbp-59h]
  __int64 v15; // [rsp+68h] [rbp-51h]
  __int64 *v16; // [rsp+70h] [rbp-49h]
  __int64 v17; // [rsp+78h] [rbp-41h]
  __int64 v18; // [rsp+80h] [rbp-39h]
  int v19; // [rsp+88h] [rbp-31h]
  int v20; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  __int64 v23; // [rsp+A0h] [rbp-19h]
  int v24; // [rsp+A8h] [rbp-11h]
  int v25; // [rsp+ACh] [rbp-Dh]
  __int64 v26; // [rsp+B0h] [rbp-9h]
  __int64 v27; // [rsp+B8h] [rbp-1h]
  __int64 v28; // [rsp+C0h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+Fh]

  v28 = a10;
  v26 = a9;
  v29 = 8LL;
  v27 = 8LL;
  v22 = 2LL;
  v25 = 0;
  v23 = *a8;
  v24 = 8 * *((unsigned __int16 *)a8 + 4);
  v21 = a8 + 1;
  v17 = 2LL;
  v20 = 0;
  v15 = 8LL;
  v18 = *a7;
  v19 = 8 * *((unsigned __int16 *)a7 + 4);
  v14 = a6;
  v12 = a5;
  v16 = a7 + 1;
  v13 = 8LL;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 0xAu, &v11);
}
