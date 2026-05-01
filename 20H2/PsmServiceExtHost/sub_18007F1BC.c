/*
 * XREFs of sub_18007F1BC @ 0x18007F1BC
 * Callers:
 *     sub_180023070 @ 0x180023070 (sub_180023070.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007F1BC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-39h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-19h]
  int v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+5Ch] [rbp-Dh]
  __int64 v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  __int64 v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v23 = a8;
  v21 = a7;
  v24 = 1LL;
  v22 = 4LL;
  v9 = *(unsigned __int8 *)(*a6 + 1);
  v18 = *a6;
  v20 = 0;
  v19 = 4 * v9 + 8;
  v10 = *a5;
  if ( *a5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_180095550;
    v12 = 2;
  }
  v15 = v10;
  v16 = v12;
  v17 = 0;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 6u, &v14);
}
