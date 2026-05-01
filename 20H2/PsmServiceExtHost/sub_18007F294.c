/*
 * XREFs of sub_18007F294 @ 0x18007F294
 * Callers:
 *     sub_180027150 @ 0x180027150 (sub_180027150.c)
 *     sub_18002AC2C @ 0x18002AC2C (sub_18002AC2C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007F294(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 *a7,
        __int64 a8)
{
  int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  _WORD *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  __int64 v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v23 = a8;
  v24 = 8LL;
  v9 = *(unsigned __int8 *)(*a7 + 1);
  v20 = *a7;
  v22 = 0;
  v21 = 4 * v9 + 8;
  v10 = *a6;
  if ( *a6 )
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
  v15 = a5;
  v17 = v10;
  v18 = v12;
  v19 = 0;
  v16 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 6u, &v14);
}
