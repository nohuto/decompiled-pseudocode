/*
 * XREFs of _SHA256Final@8 @ 0x4B2EE630
 * Callers:
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 * Callees:
 *     _DWORDToBigEndian@12 @ 0x4B2E7B8D (_DWORDToBigEndian@12.c)
 *     _SHA256Init@4 @ 0x4B2EE6E0 (_SHA256Init@4.c)
 *     _SHA256Update@12 @ 0x4B2EE726 (_SHA256Update@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

_BYTE *__fastcall SHA256Final(int a1, unsigned __int32 *a2)
{
  int v3; // edi
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  _BYTE *result; // eax
  size_t v8; // [esp-4h] [ebp-6Ch]
  int v9; // [esp+Ch] [ebp-5Ch] BYREF
  int v10; // [esp+10h] [ebp-58h] BYREF
  unsigned __int32 *v11; // [esp+14h] [ebp-54h]
  _BYTE v12[76]; // [esp+18h] [ebp-50h] BYREF

  v11 = a2;
  v3 = 64;
  v4 = 64 - (*(_DWORD *)(a1 + 36) & 0x3F);
  if ( v4 <= 8 )
    v4 += 64;
  LODWORD(v8) = v4 - 8;
  memset(v12, 0, v8);
  v5 = (*(_DWORD *)(a1 + 36) >> 29) | (8 * *(_DWORD *)(a1 + 32));
  v12[0] = 0x80;
  v6 = *(_DWORD *)(a1 + 36);
  v9 = v5;
  v10 = 8 * v6;
  DWORDToBigEndian((unsigned __int32 *)((char *)&v10 + v4), (int)&v9, 2);
  SHA256Update(v4);
  DWORDToBigEndian(v11, a1, 8);
  SHA256Init(a1);
  result = (_BYTE *)(a1 + 40);
  do
  {
    *result++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}
