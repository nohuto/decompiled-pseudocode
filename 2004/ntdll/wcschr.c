/*
 * XREFs of wcschr @ 0x180091D60
 * Callers:
 *     EtwpGenerateFileName @ 0x18005814C (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006CD64 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x18007FC20 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x1800822B0 (RtlGetExePath.c)
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
