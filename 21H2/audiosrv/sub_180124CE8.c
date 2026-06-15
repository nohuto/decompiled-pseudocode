/*
 * XREFs of sub_180124CE8 @ 0x180124CE8
 * Callers:
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180124CE8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        void **a9)
{
  __int64 v10; // rdx
  int v11; // r8d
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rcx
  _WORD *v16; // rcx
  _BYTE v18[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  _WORD *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
  v11 = 2;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_18015C744;
    v14 = 2;
  }
  v28 = v12;
  v29 = v14;
  v30 = 0;
  v15 = *a8;
  v24 = a7;
  v22 = a6;
  v26 = v15;
  v27 = 16LL;
  v25 = 4LL;
  v16 = *a5;
  v23 = 4LL;
  if ( v16 )
  {
    do
      ++v10;
    while ( v16[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v16 = &unk_18015C744;
  }
  v19 = v16;
  v20 = v11;
  v21 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 7, (__int64)v18);
}
