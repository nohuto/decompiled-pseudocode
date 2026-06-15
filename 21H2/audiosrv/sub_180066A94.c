/*
 * XREFs of sub_180066A94 @ 0x180066A94
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 * Callees:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180066A94(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = (unsigned int)(2 * v3 + 2);
  }
  else
  {
    v4 = 10LL;
  }
  v9 = 0;
  v8 = v4;
  if ( !a3 )
    a3 = L"NULL";
  v7 = a3;
  return sub_18000F730(v4, (__int64)&unk_18015D1B0, (__int64)a3, 2LL, (__int64)v6);
}
