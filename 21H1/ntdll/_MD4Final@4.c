/*
 * XREFs of _MD4Final@4 @ 0x4B3800A0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _MD4Update@12 @ 0x4B380180 (_MD4Update@12.c)
 */

int __stdcall MD4Final(_DWORD *a1)
{
  int v1; // edi
  unsigned int v2; // ecx
  _DWORD *v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  _BYTE *v7; // esi
  int result; // eax
  size_t v9; // [esp-4h] [ebp-5Ch]
  _BYTE Src[72]; // [esp+Ch] [ebp-4Ch] BYREF

  v1 = 56;
  v2 = a1[4];
  v3 = a1 + 22;
  v4 = a1[5];
  a1[22] = v2;
  v5 = (v2 >> 3) & 0x3F;
  a1[23] = v4;
  if ( v5 >= 0x38 )
    v1 = 120;
  v6 = v1 - v5;
  LODWORD(v9) = v6;
  memset(Src, 0, v9);
  Src[0] = 0x80;
  MD4Update((int)a1, Src, v6);
  MD4Update((int)a1, v3, 8);
  *v3 = *a1;
  a1[23] = a1[1];
  a1[24] = a1[2];
  a1[25] = a1[3];
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
