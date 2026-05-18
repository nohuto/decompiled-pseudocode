/*
 * XREFs of sub_180002B08 @ 0x180002B08
 * Callers:
 *     sub_180114EF0 @ 0x180114EF0 (sub_180114EF0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002B08(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        void **a5,
        __int64 a6,
        void **a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v12; // rdx
  _BYTE *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  _BYTE *v22; // r8
  int v23; // edx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-79h] BYREF
  _BYTE *v26; // [rsp+50h] [rbp-59h]
  int v27; // [rsp+58h] [rbp-51h]
  int v28; // [rsp+5Ch] [rbp-4Dh]
  __int64 v29; // [rsp+60h] [rbp-49h]
  int v30; // [rsp+68h] [rbp-41h]
  int v31; // [rsp+6Ch] [rbp-3Dh]
  _BYTE *v32; // [rsp+70h] [rbp-39h]
  int v33; // [rsp+78h] [rbp-31h]
  int v34; // [rsp+7Ch] [rbp-2Dh]
  _BYTE *v35; // [rsp+80h] [rbp-29h]
  int v36; // [rsp+88h] [rbp-21h]
  int v37; // [rsp+8Ch] [rbp-1Dh]
  _BYTE *v38; // [rsp+90h] [rbp-19h]
  int v39; // [rsp+98h] [rbp-11h]
  int v40; // [rsp+9Ch] [rbp-Dh]
  __int64 v41; // [rsp+A0h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp-1h]
  int v43; // [rsp+ACh] [rbp+3h]

  v43 = 0;
  v41 = a10;
  v12 = -1LL;
  v42 = 4;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_180139BFA;
    v15 = 1;
  }
  v40 = 0;
  v39 = v15;
  v38 = v13;
  v16 = *a8;
  if ( *a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_180139BFA;
    v18 = 1;
  }
  v37 = 0;
  v36 = v18;
  v35 = v16;
  v19 = *a7;
  if ( *a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &unk_180139BFA;
    v21 = 1;
  }
  v34 = 0;
  v31 = 0;
  v33 = v21;
  v29 = a6;
  v32 = v19;
  v30 = 8;
  v22 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v22[v12] );
    v23 = v12 + 1;
  }
  else
  {
    v22 = &unk_180139BFA;
    v23 = 1;
  }
  v28 = 0;
  v26 = v22;
  v27 = v23;
  return sub_180002A58(a1, a2, a3, a4, 8u, &v25);
}
