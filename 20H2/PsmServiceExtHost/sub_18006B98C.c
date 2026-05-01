/*
 * XREFs of sub_18006B98C @ 0x18006B98C
 * Callers:
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18006B98C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  __int64 *v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+8Ch] [rbp+2Bh]

  v14 = 2LL;
  v17 = 0;
  v12 = 4LL;
  v10 = 4LL;
  v15 = *a7;
  v16 = 8 * *((unsigned __int16 *)a7 + 4);
  v11 = a6;
  v9 = a5;
  v13 = a7 + 1;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 6u, &v8);
}
