/*
 * XREFs of __wcslwr @ 0x4B2F79F0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

wchar_t *__cdecl _wcslwr(wchar_t *String)
{
  wchar_t *v2; // esi
  wchar_t v3; // di

  if ( String )
  {
    v2 = String;
    if ( *String )
    {
      v3 = *String;
      do
      {
        if ( (unsigned __int16)(v3 - 65) <= 0x19u )
          *v2 = v3 + 32;
        v3 = *++v2;
      }
      while ( *v2 );
    }
    return String;
  }
  else
  {
    _invalid_parameter();
    return 0;
  }
}
