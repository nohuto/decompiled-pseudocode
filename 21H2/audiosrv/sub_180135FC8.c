/*
 * XREFs of sub_180135FC8 @ 0x180135FC8
 * Callers:
 *     sub_1800D74D0 @ 0x1800D74D0 (sub_1800D74D0.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1801339A4 @ 0x1801339A4 (sub_1801339A4.c)
 */

__int64 __fastcall sub_180135FC8(__int64 a1, wchar_t *a2)
{
  wchar_t *v2; // rsi
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  _BYTE *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 464);
  if ( !*(_BYTE *)(a1 + 209) )
    a2 = L"LegacyDefaultEndpointKey";
  sub_180060060(v13, a2);
  sub_1800308A0(v6, &v11, (char *)v13);
  if ( v14 >= 8 )
    sub_1800472E0(v13[0], 2 * v14 + 2);
  if ( v11 != *(_QWORD *)(a1 + 472) )
  {
    v7 = *(_BYTE **)(v11 + 48);
    if ( v7 )
    {
      v7 += 2;
      v10 = 6LL;
      do
      {
        if ( v5 || *v7 )
          v5 = 1;
        v7 += 24;
        --v10;
      }
      while ( v10 );
    }
  }
  if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    LODWORD(v11) = v5;
    v12 = v2;
    sub_1801339A4((__int64)v7, byte_18016CA61, v8, v9, (void **)&v12, (__int64)&v11);
  }
  return v5;
}
