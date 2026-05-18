/*
 * XREFs of sub_1800024F0 @ 0x1800024F0
 * Callers:
 *     sub_180112D40 @ 0x180112D40 (sub_180112D40.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800024F0(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
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
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  int v26; // r8d
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp-89h]
  int v30; // [rsp+58h] [rbp-81h]
  int v31; // [rsp+5Ch] [rbp-7Dh]
  __int64 v32; // [rsp+60h] [rbp-79h]
  __int64 v33; // [rsp+68h] [rbp-71h]
  __int64 v34; // [rsp+70h] [rbp-69h]
  __int64 v35; // [rsp+78h] [rbp-61h]
  __int64 v36; // [rsp+80h] [rbp-59h]
  __int64 v37; // [rsp+88h] [rbp-51h]
  __int64 v38; // [rsp+90h] [rbp-49h]
  __int64 v39; // [rsp+98h] [rbp-41h]
  _BYTE *v40; // [rsp+A0h] [rbp-39h]
  int v41; // [rsp+A8h] [rbp-31h]
  int v42; // [rsp+ACh] [rbp-2Dh]
  _BYTE *v43; // [rsp+B0h] [rbp-29h]
  int v44; // [rsp+B8h] [rbp-21h]
  int v45; // [rsp+BCh] [rbp-1Dh]
  _BYTE *v46; // [rsp+C0h] [rbp-19h]
  int v47; // [rsp+C8h] [rbp-11h]
  int v48; // [rsp+CCh] [rbp-Dh]

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
    v15 = &unk_180139BFA;
    v17 = 1;
  }
  v47 = v17;
  v46 = v15;
  v48 = 0;
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
    v18 = &unk_180139BFA;
    v20 = 1;
  }
  v44 = v20;
  v43 = v18;
  v45 = 0;
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
    v21 = &unk_180139BFA;
    v23 = 1;
  }
  v41 = v23;
  v40 = v21;
  v42 = 0;
  v39 = 16LL;
  v38 = *a9;
  v37 = 16LL;
  v35 = 16LL;
  v36 = *a8;
  v33 = 4LL;
  v24 = *a7;
  v32 = a6;
  v34 = v24;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v14;
    while ( v25[v14] );
    v26 = v14 + 1;
  }
  else
  {
    v25 = &unk_180139BFA;
    v26 = 1;
  }
  v29 = v25;
  v30 = v26;
  v31 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0xAu, &v28);
}
