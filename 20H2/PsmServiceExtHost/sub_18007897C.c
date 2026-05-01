/*
 * XREFs of sub_18007897C @ 0x18007897C
 * Callers:
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007897C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // eax
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  _WORD *v19; // [rsp+60h] [rbp-39h]
  int v20; // [rsp+68h] [rbp-31h]
  int v21; // [rsp+6Ch] [rbp-2Dh]
  __int64 v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  __int64 v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]

  v29 = a10;
  v27 = a9;
  v25 = a8;
  v30 = 4LL;
  v28 = 1LL;
  v26 = 4LL;
  v11 = *(unsigned __int8 *)(*a7 + 1);
  v22 = *a7;
  v24 = 0;
  v23 = 4 * v11 + 8;
  v12 = *a6;
  if ( *a6 )
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
  v17 = a5;
  v19 = v12;
  v20 = v14;
  v21 = 0;
  v18 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 8u, &v16);
}
