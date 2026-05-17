/*
 * XREFs of wcschr @ 0x180092460
 * Callers:
 *     EtwpGenerateFileName @ 0x18004C468 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006DEA4 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x180080640 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x180082AC0 (RtlGetExePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
