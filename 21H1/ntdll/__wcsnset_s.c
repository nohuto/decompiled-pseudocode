/*
 * XREFs of __wcsnset_s @ 0x4B2F7B30
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _wcsnset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value, size_t MaxCount)
{
  int v4; // edi
  int v6; // esi
  wchar_t *i; // edx

  v4 = Value;
  if ( Value )
  {
    if ( !Destination )
      goto LABEL_18;
  }
  else if ( !Destination )
  {
    if ( !(_DWORD)SizeInWords )
      return 0;
    goto LABEL_18;
  }
  v6 = SizeInWords;
  if ( (_DWORD)SizeInWords )
  {
    for ( i = Destination; *i; --v4 )
    {
      if ( !v4 )
        break;
      if ( !--v6 )
        break;
      *i++ = WORD2(SizeInWords);
    }
    if ( !v4 )
    {
      while ( *i )
      {
        if ( !--v6 )
          break;
        ++i;
      }
    }
    if ( v6 )
      return 0;
    *Destination = 0;
  }
LABEL_18:
  _invalid_parameter();
  return 22;
}
