/*
 * XREFs of sub_1800F59B4 @ 0x1800F59B4
 * Callers:
 *     sub_180038664 @ 0x180038664 (sub_180038664.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800F59B4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const CHAR **a8)
{
  const CHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  _BYTE v13[32]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  __int64 v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  const CHAR *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  v9 = *a8;
  if ( *a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = MultiByteStr;
    v11 = 1;
  }
  v21 = v11;
  v18 = a7;
  v16 = a6;
  v14 = a5;
  v20 = v9;
  v22 = 0;
  v19 = 8LL;
  v17 = 4LL;
  v15 = 4LL;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 6, (__int64)v13);
}
