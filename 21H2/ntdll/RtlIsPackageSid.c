/*
 * XREFs of RtlIsPackageSid @ 0x1800841C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1800A1FB0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
