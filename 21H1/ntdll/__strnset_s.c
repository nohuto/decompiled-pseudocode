/*
 * XREFs of __strnset_s @ 0x4B2FFA30
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _strnset_s(char *String, size_t SizeInBytes, int Value, size_t MaxCount)
{
  int v4; // esi
  int v6; // edx
  char *i; // eax

  v4 = Value;
  if ( Value )
  {
    if ( !String )
      goto LABEL_18;
  }
  else if ( !String )
  {
    if ( !(_DWORD)SizeInBytes )
      return 0;
    goto LABEL_18;
  }
  v6 = SizeInBytes;
  if ( (_DWORD)SizeInBytes )
  {
    for ( i = String; *i; --v4 )
    {
      if ( !v4 )
        break;
      if ( !--v6 )
        break;
      *i++ = BYTE4(SizeInBytes);
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
    *String = 0;
  }
LABEL_18:
  _invalid_parameter();
  return 22;
}
