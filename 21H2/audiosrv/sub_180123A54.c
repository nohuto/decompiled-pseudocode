/*
 * XREFs of sub_180123A54 @ 0x180123A54
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180123A54(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        void **a7)
{
  __int64 v8; // rdx
  int v9; // r9d
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  _WORD *v13; // rcx
  _BYTE v15[32]; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int64 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+68h] [rbp-30h]
  _WORD *v21; // [rsp+70h] [rbp-28h]
  int v22; // [rsp+78h] [rbp-20h]
  int v23; // [rsp+7Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 2;
  v10 = *a7;
  if ( *a7 )
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
  v21 = v10;
  v22 = v12;
  v23 = 0;
  v19 = *a6;
  v20 = 16LL;
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
