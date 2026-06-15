/*
 * XREFs of sub_1801185CC @ 0x1801185CC
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801185CC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  int v9; // edx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rax
  _BYTE v14[32]; // [rsp+30h] [rbp-39h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-19h]
  int v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+5Ch] [rbp-Dh]
  __int64 v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]

  v22 = a8;
  v9 = 2;
  v23 = 2LL;
  v21 = 16LL;
  v19 = 1LL;
  v10 = *a7;
  v18 = a6;
  v20 = v10;
  v11 = *a5;
  if ( *a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v9 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_18015C744;
  }
  v15 = v11;
  v16 = v9;
  v17 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 6, (__int64)v14);
}
