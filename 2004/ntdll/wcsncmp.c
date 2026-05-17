/*
 * XREFs of wcsncmp @ 0x180091E90
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18004AA90 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x18009C34C (LdrpCompareResourceNamesWithValidation.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
