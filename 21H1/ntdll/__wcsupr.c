/*
 * XREFs of __wcsupr @ 0x4B2F7F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl _wcsupr(wchar_t *String)
{
  wchar_t *v1; // edx
  wchar_t v2; // di

  v1 = String;
  if ( *String )
  {
    v2 = *String;
    do
    {
      if ( (unsigned __int16)(v2 - 97) <= 0x19u )
        *v1 = v2 - 32;
      v2 = *++v1;
    }
    while ( *v1 );
  }
  return String;
}
