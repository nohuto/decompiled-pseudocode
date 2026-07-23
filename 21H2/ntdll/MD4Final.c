/*
 * XREFs of MD4Final @ 0x18010FE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     MD4Update @ 0x1801104D0 (MD4Update.c)
 */

__int64 __fastcall MD4Final(_DWORD *a1)
{
  unsigned int v1; // edx
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 i; // rcx
  __int64 result; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-68h] BYREF

  v1 = a1[4];
  v3 = a1[5];
  a1[22] = v1;
  a1[23] = v3;
  v4 = (v1 >> 3) & 0x3F;
  v5 = 56 - v4;
  if ( v4 >= 0x38 )
    v5 = 120 - v4;
  v6 = v5;
  memset(v9, 0, v5);
  v9[0] = 0x80;
  MD4Update(a1, v9, v6);
  MD4Update(a1, a1 + 22, 8LL);
  for ( i = 0LL; i < 4; ++i )
    a1[i + 22] = a1[i];
  result = 0LL;
  memset(a1 + 6, 0, 0x40uLL);
  return result;
}
