/*
 * XREFs of _RtlIsCapabilitySid@4 @ 0x4B2D93E0
 * Callers:
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  BOOLEAN result; // al
  SIZE_T v2; // [esp-4h] [ebp-8h]

  result = 0;
  if ( *((_BYTE *)Sid + 1) >= 2u && *(_BYTE *)Sid == 1 )
  {
    LODWORD(v2) = 6;
    if ( (unsigned int)RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, v2) == 6 && *((_DWORD *)Sid + 2) == 3 )
      return 1;
  }
  return result;
}
