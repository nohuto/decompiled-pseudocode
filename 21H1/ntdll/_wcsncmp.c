/*
 * XREFs of _wcsncmp @ 0x4B2FA7E0
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8 (_LdrpResCompareResourceNames@32.c)
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax

  result = MaxCount;
  if ( (_DWORD)MaxCount )
  {
    while ( --result && *String1 && *String1 == *String2 )
    {
      ++String1;
      ++String2;
    }
    return *String1 - *String2;
  }
  return result;
}
