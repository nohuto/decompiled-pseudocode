/*
 * XREFs of sub_18012F274 @ 0x18012F274
 * Callers:
 *     sub_18012F780 @ 0x18012F780 (sub_18012F780.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18012F274(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const CHAR **a5,
        __int64 *a6,
        void **a7,
        const CHAR **a8,
        __int64 a9)
{
  __int64 v11; // rdx
  const CHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  const CHAR *v18; // rcx
  int v19; // edx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-51h] BYREF
  const CHAR *v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+5Ch] [rbp-25h]
  __int64 v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h]
  _WORD *v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  int v29; // [rsp+7Ch] [rbp-5h]
  const CHAR *v30; // [rsp+80h] [rbp-1h]
  int v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+8Ch] [rbp+Bh]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v33 = a9;
  v11 = -1LL;
  v34 = 4LL;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = MultiByteStr;
    v14 = 1;
  }
  v31 = v14;
  v30 = v12;
  v32 = 0;
  v15 = *a7;
  if ( *a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &unk_18015C744;
    v17 = 2;
  }
  v27 = v15;
  v28 = v17;
  v29 = 0;
  v25 = *a6;
  v26 = 16LL;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v18[v11] );
    v19 = v11 + 1;
  }
  else
  {
    v18 = MultiByteStr;
    v19 = 1;
  }
  v22 = v18;
  v23 = v19;
  v24 = 0;
  return sub_180109634(a1, a2, 0LL, 0LL, 7u, &v21);
}
