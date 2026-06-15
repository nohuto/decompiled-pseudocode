/*
 * XREFs of sub_18012DE50 @ 0x18012DE50
 * Callers:
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18012DE50(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        void **a9)
{
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h]
  __int64 v18; // [rsp+58h] [rbp-29h]
  __int64 v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  __int64 v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  _WORD *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_18015C744;
    v13 = 2;
  }
  v25 = v11;
  v26 = v13;
  v27 = 0;
  v14 = *a8;
  v21 = a7;
  v19 = a6;
  v17 = a5;
  v23 = v14;
  v24 = 16LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 8LL;
  return sub_180109634(a1, a2, 0LL, 0LL, 7u, &v16);
}
