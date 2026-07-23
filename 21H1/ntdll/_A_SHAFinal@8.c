/*
 * XREFs of _A_SHAFinal@8 @ 0x4B2E7AE0
 * Callers:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0 (_RtlCreateVirtualAccountSid@16.c)
 * Callees:
 *     _DWORDToBigEndian@12 @ 0x4B2E7B8D (_DWORDToBigEndian@12.c)
 *     _A_SHAUpdate@12 @ 0x4B2E7BC0 (_A_SHAUpdate@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _A_SHAInit@4 @ 0x4B308A40 (_A_SHAInit@4.c)
 */

int __stdcall A_SHAFinal(_DWORD *a1, int a2)
{
  unsigned int v2; // esi
  size_t v4; // [esp-4h] [ebp-68h]
  size_t v5; // [esp-4h] [ebp-68h]
  _BYTE Src[72]; // [esp+18h] [ebp-4Ch] BYREF

  v2 = 64 - (a1[22] & 0x3F);
  if ( v2 <= 8 )
    v2 += 64;
  LODWORD(v4) = v2 - 8;
  memset(Src, 0, v4);
  Src[0] = 0x80;
  DWORDToBigEndian(2);
  A_SHAUpdate((int)a1, Src, v2);
  DWORDToBigEndian(5);
  LODWORD(v5) = 64;
  memset(a1, 0, v5);
  return A_SHAInit(a1);
}
