/*
 * XREFs of sub_1801184CC @ 0x1801184CC
 * Callers:
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 *     sub_180122288 @ 0x180122288 (sub_180122288.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801184CC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7)
{
  __int64 v8; // rcx
  int v9; // r9d
  _WORD *v10; // rdx
  __int64 v11; // rax
  int v12; // r8d
  _WORD *v13; // rdx
  _BYTE v15[32]; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  _WORD *v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]
  int v21; // [rsp+6Ch] [rbp-2Ch]
  __int64 v22; // [rsp+70h] [rbp-28h]
  __int64 v23; // [rsp+78h] [rbp-20h]

  v22 = a7;
  v8 = -1LL;
  v23 = 4LL;
  v9 = 2;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_18015C744;
    v12 = 2;
  }
  v19 = v10;
  v20 = v12;
  v21 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v13 = &unk_18015C744;
  }
  v16 = v13;
  v17 = v9;
  v18 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 5, (__int64)v15);
}
