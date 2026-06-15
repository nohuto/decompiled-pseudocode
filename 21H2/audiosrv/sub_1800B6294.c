/*
 * XREFs of sub_1800B6294 @ 0x1800B6294
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_18004C540 @ 0x18004C540 (sub_18004C540.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B6294(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const CHAR **a5,
        __int64 a6,
        __int64 a7)
{
  const CHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  const CHAR *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v18 = a7;
  v16 = a6;
  v19 = 4LL;
  v17 = 4LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v8 = MultiByteStr;
    v10 = 1;
  }
  v14 = v10;
  v13 = v8;
  v15 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 5, (__int64)v12);
}
