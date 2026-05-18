/*
 * XREFs of sub_180001174 @ 0x180001174
 * Callers:
 *     sub_18011A2D0 @ 0x18011A2D0 (sub_18011A2D0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001174(
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
        void **a11,
        void **a12)
{
  __int64 v14; // r8
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  _BYTE *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  _BYTE *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  _BYTE *v31; // rcx
  int v32; // r8d
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-B1h] BYREF
  _BYTE *v35; // [rsp+50h] [rbp-91h]
  int v36; // [rsp+58h] [rbp-89h]
  int v37; // [rsp+5Ch] [rbp-85h]
  __int64 v38; // [rsp+60h] [rbp-81h]
  __int64 v39; // [rsp+68h] [rbp-79h]
  __int64 v40; // [rsp+70h] [rbp-71h]
  __int64 v41; // [rsp+78h] [rbp-69h]
  _BYTE *v42; // [rsp+80h] [rbp-61h]
  int v43; // [rsp+88h] [rbp-59h]
  int v44; // [rsp+8Ch] [rbp-55h]
  _BYTE *v45; // [rsp+90h] [rbp-51h]
  int v46; // [rsp+98h] [rbp-49h]
  int v47; // [rsp+9Ch] [rbp-45h]
  _BYTE *v48; // [rsp+A0h] [rbp-41h]
  int v49; // [rsp+A8h] [rbp-39h]
  int v50; // [rsp+ACh] [rbp-35h]
  _BYTE *v51; // [rsp+B0h] [rbp-31h]
  int v52; // [rsp+B8h] [rbp-29h]
  int v53; // [rsp+BCh] [rbp-25h]
  _BYTE *v54; // [rsp+C0h] [rbp-21h]
  int v55; // [rsp+C8h] [rbp-19h]
  int v56; // [rsp+CCh] [rbp-15h]

  v14 = -1LL;
  v15 = *a12;
  if ( *a12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_18013FCFA;
    v17 = 1;
  }
  v55 = v17;
  v54 = v15;
  v56 = 0;
  v18 = *a11;
  if ( *a11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_18013FCFA;
    v20 = 1;
  }
  v52 = v20;
  v51 = v18;
  v53 = 0;
  v21 = *a10;
  if ( *a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_18013FCFA;
    v23 = 1;
  }
  v49 = v23;
  v48 = v21;
  v50 = 0;
  v24 = *a9;
  if ( *a9 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v24 = &unk_18013FCFA;
    v26 = 1;
  }
  v46 = v26;
  v45 = v24;
  v47 = 0;
  v27 = *a8;
  if ( *a8 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &unk_18013FCFA;
    v29 = 1;
  }
  v43 = v29;
  v42 = v27;
  v44 = 0;
  v41 = 16LL;
  v30 = *a7;
  v38 = a6;
  v40 = v30;
  v39 = 4LL;
  v31 = *a5;
  if ( *a5 )
  {
    do
      ++v14;
    while ( v31[v14] );
    v32 = v14 + 1;
  }
  else
  {
    v31 = &unk_18013FCFA;
    v32 = 1;
  }
  v35 = v31;
  v36 = v32;
  v37 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0xAu, &v34);
}
