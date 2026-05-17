/*
 * XREFs of __strnicmp @ 0x4B2F74A0
 * Callers:
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrpCheckSafeDiscDll@4 @ 0x4B2E7708 (_LdrpCheckSafeDiscDll@4.c)
 *     _SbpLookup@8 @ 0x4B385EE1 (_SbpLookup@8.c)
 * Callees:
 *     <none>
 */

int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return __ascii_strnicmp(String1, String2, MaxCount);
}
