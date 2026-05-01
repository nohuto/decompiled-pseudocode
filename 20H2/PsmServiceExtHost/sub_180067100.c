/*
 * XREFs of sub_180067100 @ 0x180067100
 * Callers:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180067100(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v15; // [rsp+50h] [rbp-91h]
  __int64 v16; // [rsp+58h] [rbp-89h]
  __int64 v17; // [rsp+60h] [rbp-81h]
  __int64 v18; // [rsp+68h] [rbp-79h]
  __int64 v19; // [rsp+70h] [rbp-71h]
  __int64 v20; // [rsp+78h] [rbp-69h]
  __int64 v21; // [rsp+80h] [rbp-61h]
  __int64 v22; // [rsp+88h] [rbp-59h]
  __int64 v23; // [rsp+90h] [rbp-51h]
  __int64 v24; // [rsp+98h] [rbp-49h]
  __int64 v25; // [rsp+A0h] [rbp-41h]
  __int64 v26; // [rsp+A8h] [rbp-39h]
  __int64 v27; // [rsp+B0h] [rbp-31h]
  __int64 v28; // [rsp+B8h] [rbp-29h]
  __int64 v29; // [rsp+C0h] [rbp-21h]
  __int64 v30; // [rsp+C8h] [rbp-19h]
  __int64 v31; // [rsp+D0h] [rbp-11h]
  __int64 v32; // [rsp+D8h] [rbp-9h]

  v31 = a13;
  v29 = a12;
  v27 = a11;
  v25 = a10;
  v23 = a9;
  v21 = a8;
  v19 = a7;
  v17 = a6;
  v15 = a5;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 8LL;
  v16 = 4LL;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 0xBu, &v14);
}
