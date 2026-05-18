/*
 * XREFs of sub_180001000 @ 0x180001000
 * Callers:
 *     sub_180117DF0 @ 0x180117DF0 (sub_180117DF0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001000(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        void **a8,
        void **a9,
        void **a10,
        void **a11)
{
  __int64 v13; // r8
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  _BYTE *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  _BYTE *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  int v28; // r8d
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE *v31; // [rsp+50h] [rbp-81h]
  int v32; // [rsp+58h] [rbp-79h]
  int v33; // [rsp+5Ch] [rbp-75h]
  __int64 v34; // [rsp+60h] [rbp-71h]
  __int64 v35; // [rsp+68h] [rbp-69h]
  __int64 v36; // [rsp+70h] [rbp-61h]
  __int64 v37; // [rsp+78h] [rbp-59h]
  _BYTE *v38; // [rsp+80h] [rbp-51h]
  int v39; // [rsp+88h] [rbp-49h]
  int v40; // [rsp+8Ch] [rbp-45h]
  _BYTE *v41; // [rsp+90h] [rbp-41h]
  int v42; // [rsp+98h] [rbp-39h]
  int v43; // [rsp+9Ch] [rbp-35h]
  _BYTE *v44; // [rsp+A0h] [rbp-31h]
  int v45; // [rsp+A8h] [rbp-29h]
  int v46; // [rsp+ACh] [rbp-25h]
  _BYTE *v47; // [rsp+B0h] [rbp-21h]
  int v48; // [rsp+B8h] [rbp-19h]
  int v49; // [rsp+BCh] [rbp-15h]

  v13 = -1LL;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_18013FCFA;
    v16 = 1;
  }
  v48 = v16;
  v47 = v14;
  v49 = 0;
  v17 = *a10;
  if ( *a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_18013FCFA;
    v19 = 1;
  }
  v45 = v19;
  v44 = v17;
  v46 = 0;
  v20 = *a9;
  if ( *a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &unk_18013FCFA;
    v22 = 1;
  }
  v42 = v22;
  v41 = v20;
  v43 = 0;
  v23 = *a8;
  if ( *a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v23 = &unk_18013FCFA;
    v25 = 1;
  }
  v39 = v25;
  v38 = v23;
  v40 = 0;
  v37 = 16LL;
  v26 = *a7;
  v34 = a6;
  v36 = v26;
  v35 = 4LL;
  v27 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v27[v13] );
    v28 = v13 + 1;
  }
  else
  {
    v27 = &unk_18013FCFA;
    v28 = 1;
  }
  v31 = v27;
  v32 = v28;
  v33 = 0;
  return sub_180002A58(a1, a2, a3, a4, 9u, &v30);
}
