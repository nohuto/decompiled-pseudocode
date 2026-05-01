/*
 * XREFs of sub_18007CC90 @ 0x18007CC90
 * Callers:
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007CC90(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  int v11; // r9d
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  _WORD *v15; // rdx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h]
  __int64 v19; // [rsp+58h] [rbp-29h]
  _WORD *v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  _WORD *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]

  v28 = a9;
  v10 = -1LL;
  v26 = a8;
  v11 = 2;
  v29 = 8LL;
  v27 = 8LL;
  v12 = *a7;
  if ( *a7 )
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
  v23 = v12;
  v24 = v14;
  v25 = 0;
  v15 = *a6;
  if ( *a6 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v15 = &unk_180095550;
  }
  v18 = a5;
  v20 = v15;
  v21 = v11;
  v22 = 0;
  v19 = 8LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v17);
}
