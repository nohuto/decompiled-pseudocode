/*
 * XREFs of sub_1800BD8FC @ 0x1800BD8FC
 * Callers:
 *     sub_1800BE130 @ 0x1800BE130 (sub_1800BE130.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BD8FC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rcx
  int v11; // r9d
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  _WORD *v15; // rdx
  _BYTE v17[32]; // [rsp+30h] [rbp-39h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  _WORD *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v26 = a8;
  v24 = a7;
  v10 = -1LL;
  v11 = 2;
  v27 = 4LL;
  v25 = 4LL;
  v12 = *a6;
  if ( *a6 )
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
  v21 = v12;
  v22 = v14;
  v23 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v15 = &unk_18015C744;
  }
  v18 = v15;
  v19 = v11;
  v20 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 6, (__int64)v17);
}
