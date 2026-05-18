/*
 * XREFs of sub_18000154C @ 0x18000154C
 * Callers:
 *     sub_180117CD0 @ 0x180117CD0 (sub_180117CD0.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_1801193F0 @ 0x1801193F0 (sub_1801193F0.c)
 *     sub_180119980 @ 0x180119980 (sub_180119980.c)
 *     sub_180119C90 @ 0x180119C90 (sub_180119C90.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000154C(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9)
{
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  int v17; // edx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-31h]
  int v21; // [rsp+58h] [rbp-29h]
  int v22; // [rsp+5Ch] [rbp-25h]
  __int64 v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  int v27; // [rsp+78h] [rbp-9h]
  int v28; // [rsp+7Ch] [rbp-5h]
  __int64 v29; // [rsp+80h] [rbp-1h]
  int v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+8Ch] [rbp+Bh]
  _BYTE *v32; // [rsp+90h] [rbp+Fh]
  int v33; // [rsp+98h] [rbp+17h]
  int v34; // [rsp+9Ch] [rbp+1Bh]

  v11 = -1LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_18013FCFA;
    v14 = 1;
  }
  v34 = 0;
  v31 = 0;
  v28 = 0;
  v25 = 0;
  v33 = v14;
  v32 = v12;
  v30 = 16;
  v27 = 16;
  v29 = *a8;
  v24 = 4;
  v15 = *a7;
  v23 = a6;
  v26 = v15;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v16[v11] );
    v17 = v11 + 1;
  }
  else
  {
    v16 = &unk_18013FCFA;
    v17 = 1;
  }
  v22 = 0;
  v20 = v16;
  v21 = v17;
  return sub_180002A58(a1, a2, a3, a4, 7u, &v19);
}
