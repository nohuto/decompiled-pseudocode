/*
 * XREFs of _strnicmp @ 0x18008D810
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x180113B8C (SbpLookup.c)
 * Callees:
 *     __ascii_strnicmp @ 0x18008D7AC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
