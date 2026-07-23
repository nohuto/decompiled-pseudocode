/*
 * XREFs of _RtlGetExePath@8 @ 0x4B2ABE60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNeedCurrentDirectoryForExePath@4 @ 0x4B2ABE9C (_RtlpNeedCurrentDirectoryForExePath@4.c)
 *     _RtlpGetCachedPath@16 @ 0x4B2B34F6 (_RtlpGetCachedPath@16.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  char v2; // al
  int CachedPath; // eax

  v2 = RtlpNeedCurrentDirectoryForExePath((wchar_t *)DosPathName);
  CachedPath = RtlpGetCachedPath(v2 == 0, 0);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 80);
    return 0;
  }
  else
  {
    *SearchPathA = 0;
    return -1073741801;
  }
}
