/*
 * XREFs of sub_18007C528 @ 0x18007C528
 * Callers:
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007C528(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-81h] BYREF
  _WORD *v17; // [rsp+50h] [rbp-61h]
  int v18; // [rsp+58h] [rbp-59h]
  int v19; // [rsp+5Ch] [rbp-55h]
  __int64 v20; // [rsp+60h] [rbp-51h]
  __int64 v21; // [rsp+68h] [rbp-49h]
  __int64 v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-29h]
  __int64 v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]

  v30 = a11;
  v28 = a10;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v31 = 8LL;
  v29 = 8LL;
  v27 = 8LL;
  v12 = *a5;
  v25 = 1LL;
  v23 = 8LL;
  v21 = 4LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_180095550;
    v14 = 2;
  }
  v17 = v12;
  v18 = v14;
  v19 = 0;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 9u, &v16);
}
