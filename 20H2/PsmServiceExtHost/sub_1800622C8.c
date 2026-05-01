/*
 * XREFs of sub_1800622C8 @ 0x1800622C8
 * Callers:
 *     PsmHostStateNotification2 @ 0x18000B680 (PsmHostStateNotification2.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800622C8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rcx
  int v13; // eax
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-81h] BYREF
  _WORD *v19; // [rsp+50h] [rbp-61h]
  int v20; // [rsp+58h] [rbp-59h]
  int v21; // [rsp+5Ch] [rbp-55h]
  __int64 v22; // [rsp+60h] [rbp-51h]
  int v23; // [rsp+68h] [rbp-49h]
  int v24; // [rsp+6Ch] [rbp-45h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+78h] [rbp-39h]
  __int64 v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  __int64 v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h]
  __int64 v31; // [rsp+A0h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-9h]
  __int64 v33; // [rsp+B0h] [rbp-1h]
  __int64 v34; // [rsp+B8h] [rbp+7h]

  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v34 = 4LL;
  v32 = 8LL;
  v30 = 4LL;
  v12 = *a6;
  v28 = 4LL;
  v26 = 4LL;
  v13 = *(unsigned __int8 *)(v12 + 1);
  v22 = v12;
  v24 = 0;
  v23 = 4 * v13 + 8;
  v14 = *a5;
  if ( *a5 )
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
  v19 = v14;
  v20 = v16;
  v21 = 0;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 9u, &v18);
}
