/*
 * XREFs of sub_180080A60 @ 0x180080A60
 * Callers:
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180080A60(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        void **a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rcx
  int v13; // r9d
  _WORD *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  _WORD *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-81h] BYREF
  __int64 v20; // [rsp+50h] [rbp-61h]
  __int64 v21; // [rsp+58h] [rbp-59h]
  __int64 v22; // [rsp+60h] [rbp-51h]
  __int64 v23; // [rsp+68h] [rbp-49h]
  __int64 v24; // [rsp+70h] [rbp-41h]
  __int64 v25; // [rsp+78h] [rbp-39h]
  _WORD *v26; // [rsp+80h] [rbp-31h]
  int v27; // [rsp+88h] [rbp-29h]
  int v28; // [rsp+8Ch] [rbp-25h]
  _WORD *v29; // [rsp+90h] [rbp-21h]
  int v30; // [rsp+98h] [rbp-19h]
  int v31; // [rsp+9Ch] [rbp-15h]
  __int64 v32; // [rsp+A0h] [rbp-11h]
  __int64 v33; // [rsp+A8h] [rbp-9h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]

  v34 = a11;
  v12 = -1LL;
  v32 = a10;
  v13 = 2;
  v35 = 8LL;
  v33 = 4LL;
  v14 = *a9;
  if ( *a9 )
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
  v29 = v14;
  v30 = v16;
  v31 = 0;
  v17 = *a8;
  if ( *a8 )
  {
    do
      ++v12;
    while ( v17[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v17 = &unk_180095550;
  }
  v24 = a7;
  v22 = a6;
  v20 = a5;
  v26 = v17;
  v27 = v13;
  v28 = 0;
  v25 = 8LL;
  v23 = 8LL;
  v21 = 8LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 9u, &v19);
}
