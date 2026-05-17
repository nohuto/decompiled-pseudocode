/*
 * XREFs of wcschr @ 0x180091E60
 * Callers:
 *     EtwpGenerateFileName @ 0x18005819C (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006CE74 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x18007FD20 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x1800823B0 (RtlGetExePath.c)
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
