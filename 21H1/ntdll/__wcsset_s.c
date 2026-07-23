/*
 * XREFs of __wcsset_s @ 0x4B2F7BC0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _wcsset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value)
{
  int v3; // edx
  wchar_t *i; // esi

  if ( Destination )
  {
    v3 = SizeInWords;
    if ( (_DWORD)SizeInWords )
    {
      for ( i = Destination; *i; ++i )
      {
        if ( !--v3 )
          break;
        *i = WORD2(SizeInWords);
      }
      if ( v3 )
        return 0;
      *Destination = 0;
    }
  }
  _invalid_parameter();
  return 22;
}
