/*
 * XREFs of sub_18002AF54 @ 0x18002AF54
 * Callers:
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002AF54(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-79h] BYREF
  _WORD *v17; // [rsp+50h] [rbp-59h]
  int v18; // [rsp+58h] [rbp-51h]
  int v19; // [rsp+5Ch] [rbp-4Dh]
  __int64 v20; // [rsp+60h] [rbp-49h]
  __int64 v21; // [rsp+68h] [rbp-41h]
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  __int64 v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]

  v28 = a10;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v29 = 8LL;
  v27 = 8LL;
  v25 = 1LL;
  v12 = *a5;
  v23 = 1LL;
  v21 = 8LL;
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
  return sub_18002E278(a1, a2, a3, a4, 8u, &v16);
}
