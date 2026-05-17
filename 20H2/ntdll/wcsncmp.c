/*
 * XREFs of wcsncmp @ 0x180091F90
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18004AAE0 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x18009C5FC (LdrpCompareResourceNamesWithValidation.c)
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
