/*
 * XREFs of sub_180078894 @ 0x180078894
 * Callers:
 *     sub_180037748 @ 0x180037748 (sub_180037748.c)
 *     _wsetlocale_set_cat @ 0x180079634 (_wsetlocale_set_cat.c)
 *     sub_18007984C @ 0x18007984C (sub_18007984C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180078894(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // eax
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h]
  __int64 v17; // [rsp+58h] [rbp-29h]
  _WORD *v18; // [rsp+60h] [rbp-21h]
  int v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+6Ch] [rbp-15h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+7Ch] [rbp-5h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  __int64 v27; // [rsp+98h] [rbp+17h]

  v26 = a9;
  v24 = a8;
  v27 = 1LL;
  v25 = 4LL;
  v10 = *(unsigned __int8 *)(*a7 + 1);
  v21 = *a7;
  v23 = 0;
  v22 = 4 * v10 + 8;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_180095550;
    v13 = 2;
  }
  v16 = a5;
  v18 = v11;
  v19 = v13;
  v20 = 0;
  v17 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v15);
}
