/*
 * XREFs of sub_18007F43C @ 0x18007F43C
 * Callers:
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007F43C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  _WORD *v17; // [rsp+60h] [rbp-21h]
  int v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+6Ch] [rbp-15h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v22 = a8;
  v20 = a7;
  v25 = 4LL;
  v23 = 1LL;
  v21 = 8LL;
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
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v14);
}
