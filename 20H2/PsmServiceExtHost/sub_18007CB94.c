/*
 * XREFs of sub_18007CB94 @ 0x18007CB94
 * Callers:
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007CB94(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h]
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  _WORD *v21; // [rsp+70h] [rbp-41h]
  int v22; // [rsp+78h] [rbp-39h]
  int v23; // [rsp+7Ch] [rbp-35h]
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
  v31 = 8LL;
  v29 = 4LL;
  v27 = 1LL;
  v12 = *a7;
  v25 = 8LL;
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
  v19 = a6;
  v17 = a5;
  v21 = v12;
  v22 = v14;
  v23 = 0;
  v20 = 4LL;
  v18 = 4LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 9u, &v16);
}
