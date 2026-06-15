/*
 * XREFs of sub_180122170 @ 0x180122170
 * Callers:
 *     sub_180122224 @ 0x180122224 (sub_180122224.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180122170(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  _WORD *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_18015C744;
    v9 = 2;
  }
  v12 = a5;
  v14 = v7;
  v15 = v9;
  v16 = 0;
  v13 = 8LL;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 4, (__int64)v11);
}
