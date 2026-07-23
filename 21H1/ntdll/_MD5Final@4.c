/*
 * XREFs of _MD5Final@4 @ 0x4B2EF910
 * Callers:
 *     _ImportTablepHashCanonicalLists@8 @ 0x4B33E432 (_ImportTablepHashCanonicalLists@8.c)
 * Callees:
 *     _MD5Update@12 @ 0x4B2EF9B0 (_MD5Update@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall MD5Final(_DWORD *a1)
{
  int v1; // edi
  unsigned int v2; // ecx
  _DWORD *v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  _BYTE *v7; // esi
  int result; // eax
  size_t v9; // [esp-4h] [ebp-68h]
  _BYTE Src[76]; // [esp+10h] [ebp-54h] BYREF

  v1 = 56;
  v2 = *a1;
  v3 = a1 + 22;
  v4 = a1[1];
  a1[22] = *a1;
  v5 = (v2 >> 3) & 0x3F;
  a1[23] = v4;
  if ( v5 >= 0x38 )
    v1 = 120;
  v6 = v1 - v5;
  LODWORD(v9) = v6;
  memset(Src, 0, v9);
  Src[0] = 0x80;
  MD5Update((int)a1, Src, v6);
  MD5Update((int)a1, v3, 8);
  *v3 = a1[2];
  a1[23] = a1[3];
  a1[24] = a1[4];
  a1[25] = a1[5];
  v7 = a1 + 6;
  result = 64;
  do
  {
    *v7++ = 0;
    --result;
  }
  while ( result );
  return result;
}
