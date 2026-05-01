/*
 * XREFs of sub_18007876C @ 0x18007876C
 * Callers:
 *     sub_18000B858 @ 0x18000B858 (sub_18000B858.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007876C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10)
{
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  _WORD *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  _WORD *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-41h]
  _WORD *v22; // [rsp+60h] [rbp-39h]
  int v23; // [rsp+68h] [rbp-31h]
  int v24; // [rsp+6Ch] [rbp-2Dh]
  _WORD *v25; // [rsp+70h] [rbp-29h]
  int v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+7Ch] [rbp-1Dh]
  __int64 v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h]
  __int64 v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  int v32; // [rsp+9Ch] [rbp+3h]
  __int64 v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]

  v33 = a10;
  v34 = 4LL;
  v11 = 2;
  v12 = *(unsigned __int8 *)(*a9 + 1);
  v30 = *a9;
  v13 = -1LL;
  v32 = 0;
  v29 = 8LL;
  v31 = 4 * v12 + 8;
  v28 = a8;
  v14 = *a7;
  if ( *a7 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &unk_180095550;
    v16 = 2;
  }
  v25 = v14;
  v26 = v16;
  v27 = 0;
  v17 = *a6;
  if ( *a6 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v11 = 2 * v13 + 2;
  }
  else
  {
    v17 = &unk_180095550;
  }
  v20 = a5;
  v22 = v17;
  v23 = v11;
  v24 = 0;
  v21 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 8u, &v19);
}
