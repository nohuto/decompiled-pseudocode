/*
 * XREFs of sub_18000239C @ 0x18000239C
 * Callers:
 *     sub_1801181E0 @ 0x1801181E0 (sub_1801181E0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000239C(
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
        void **a11)
{
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  int v22; // edx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-91h] BYREF
  _BYTE *v25; // [rsp+50h] [rbp-71h]
  int v26; // [rsp+58h] [rbp-69h]
  int v27; // [rsp+5Ch] [rbp-65h]
  __int64 v28; // [rsp+60h] [rbp-61h]
  int v29; // [rsp+68h] [rbp-59h]
  int v30; // [rsp+6Ch] [rbp-55h]
  __int64 v31; // [rsp+70h] [rbp-51h]
  int v32; // [rsp+78h] [rbp-49h]
  int v33; // [rsp+7Ch] [rbp-45h]
  __int64 v34; // [rsp+80h] [rbp-41h]
  int v35; // [rsp+88h] [rbp-39h]
  int v36; // [rsp+8Ch] [rbp-35h]
  __int64 v37; // [rsp+90h] [rbp-31h]
  int v38; // [rsp+98h] [rbp-29h]
  int v39; // [rsp+9Ch] [rbp-25h]
  _BYTE *v40; // [rsp+A0h] [rbp-21h]
  int v41; // [rsp+A8h] [rbp-19h]
  int v42; // [rsp+ACh] [rbp-15h]
  _BYTE *v43; // [rsp+B0h] [rbp-11h]
  int v44; // [rsp+B8h] [rbp-9h]
  int v45; // [rsp+BCh] [rbp-5h]

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
  v45 = 0;
  v44 = v16;
  v43 = v14;
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
  v42 = 0;
  v39 = 0;
  v36 = 0;
  v33 = 0;
  v30 = 0;
  v41 = v19;
  v40 = v17;
  v38 = 16;
  v35 = 16;
  v37 = *a9;
  v32 = 16;
  v29 = 4;
  v34 = *a8;
  v20 = *a7;
  v28 = a6;
  v31 = v20;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v21[v13] );
    v22 = v13 + 1;
  }
  else
  {
    v21 = &unk_18013FCFA;
    v22 = 1;
  }
  v27 = 0;
  v25 = v21;
  v26 = v22;
  return sub_180002A58(a1, a2, a3, a4, 9u, &v24);
}
