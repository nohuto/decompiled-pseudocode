/*
 * XREFs of sub_180002C58 @ 0x180002C58
 * Callers:
 *     sub_18011A850 @ 0x18011A850 (sub_18011A850.c)
 *     sub_18011A8F0 @ 0x18011A8F0 (sub_18011A8F0.c)
 *     sub_18011A980 @ 0x18011A980 (sub_18011A980.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002C58(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v12; // rcx
  _BYTE *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // r8
  int v20; // ecx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-79h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-59h]
  int v24; // [rsp+58h] [rbp-51h]
  int v25; // [rsp+5Ch] [rbp-4Dh]
  __int64 v26; // [rsp+60h] [rbp-49h]
  int v27; // [rsp+68h] [rbp-41h]
  int v28; // [rsp+6Ch] [rbp-3Dh]
  __int64 v29; // [rsp+70h] [rbp-39h]
  int v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+7Ch] [rbp-2Dh]
  _BYTE *v32; // [rsp+80h] [rbp-29h]
  int v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+8Ch] [rbp-1Dh]
  _BYTE *v35; // [rsp+90h] [rbp-19h]
  int v36; // [rsp+98h] [rbp-11h]
  int v37; // [rsp+9Ch] [rbp-Dh]
  __int64 v38; // [rsp+A0h] [rbp-9h]
  int v39; // [rsp+A8h] [rbp-1h]
  int v40; // [rsp+ACh] [rbp+3h]

  v40 = 0;
  v38 = a10;
  v12 = -1LL;
  v39 = 4;
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
    v13 = &unk_18013FCFA;
    v15 = 1;
  }
  v37 = 0;
  v36 = v15;
  v35 = v13;
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
    v16 = &unk_18013FCFA;
    v18 = 1;
  }
  v34 = 0;
  v31 = 0;
  v28 = 0;
  v33 = v18;
  v29 = a7;
  v26 = a6;
  v32 = v16;
  v30 = 8;
  v27 = 8;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v19[v12] );
    v20 = v12 + 1;
  }
  else
  {
    v19 = &unk_18013FCFA;
    v20 = 1;
  }
  v25 = 0;
  v23 = v19;
  v24 = v20;
  return sub_180002A58(a1, a2, a3, a4, 8u, &v22);
}
