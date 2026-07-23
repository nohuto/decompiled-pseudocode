/*
 * XREFs of _IsSystemRootPath@8 @ 0x4B2B8E93
 * Callers:
 *     _IsOverlaySupportedPath@12 @ 0x4B2B8E4D (_IsOverlaySupportedPath@12.c)
 * Callees:
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     __wcsnicmp @ 0x4B2F7AC0 (__wcsnicmp.c)
 */

int __fastcall IsSystemRootPath(wchar_t *String1, unsigned int *a2)
{
  const unsigned __int16 *NtSystemRoot; // eax
  unsigned int v5; // esi
  int result; // eax
  size_t v7; // [esp-4h] [ebp-14h]

  *a2 = 0;
  NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot();
  v5 = wcslen(NtSystemRoot);
  LODWORD(v7) = v5;
  result = _wcsnicmp(String1, NtSystemRoot, v7);
  if ( result )
    return -1073741637;
  *a2 = v5;
  return result;
}
