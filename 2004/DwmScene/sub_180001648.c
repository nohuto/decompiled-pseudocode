/*
 * XREFs of sub_180001648 @ 0x180001648
 * Callers:
 *     sub_1801134D0 @ 0x1801134D0 (sub_1801134D0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001648(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
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
  __int64 v27; // rcx
  _BYTE *v28; // rcx
  int v29; // r8d
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-B1h] BYREF
  _BYTE *v32; // [rsp+50h] [rbp-91h]
  int v33; // [rsp+58h] [rbp-89h]
  int v34; // [rsp+5Ch] [rbp-85h]
  __int64 v35; // [rsp+60h] [rbp-81h]
  __int64 v36; // [rsp+68h] [rbp-79h]
  __int64 v37; // [rsp+70h] [rbp-71h]
  __int64 v38; // [rsp+78h] [rbp-69h]
  __int64 v39; // [rsp+80h] [rbp-61h]
  __int64 v40; // [rsp+88h] [rbp-59h]
  _BYTE *v41; // [rsp+90h] [rbp-51h]
  int v42; // [rsp+98h] [rbp-49h]
  int v43; // [rsp+9Ch] [rbp-45h]
  _BYTE *v44; // [rsp+A0h] [rbp-41h]
  int v45; // [rsp+A8h] [rbp-39h]
  int v46; // [rsp+ACh] [rbp-35h]
  _BYTE *v47; // [rsp+B0h] [rbp-31h]
  int v48; // [rsp+B8h] [rbp-29h]
  int v49; // [rsp+BCh] [rbp-25h]
  _BYTE *v50; // [rsp+C0h] [rbp-21h]
  int v51; // [rsp+C8h] [rbp-19h]
  int v52; // [rsp+CCh] [rbp-15h]

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
  v51 = v17;
  v50 = v15;
  v52 = 0;
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
  v48 = v20;
  v47 = v18;
  v49 = 0;
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
  v45 = v23;
  v44 = v21;
  v46 = 0;
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
    v24 = &unk_180139BFA;
    v26 = 1;
  }
  v42 = v26;
  v41 = v24;
  v43 = 0;
  v40 = 16LL;
  v39 = *a8;
  v38 = 16LL;
  v36 = 4LL;
  v27 = *a7;
  v35 = a6;
  v37 = v27;
  v28 = *a5;
  if ( *a5 )
  {
    do
      ++v14;
    while ( v28[v14] );
    v29 = v14 + 1;
  }
  else
  {
    v28 = &unk_180139BFA;
    v29 = 1;
  }
  v32 = v28;
  v33 = v29;
  v34 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0xAu, &v31);
}
