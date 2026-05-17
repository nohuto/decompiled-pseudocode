/*
 * XREFs of __strupr @ 0x4B2F74B0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

char *__cdecl _strupr(char *String)
{
  char v2; // cl
  char *v3; // esi

  if ( String )
  {
    v2 = *String;
    v3 = String;
    while ( v2 )
    {
      if ( (unsigned __int8)(v2 - 97) <= 0x19u )
        *v3 = v2 - 32;
      v2 = *++v3;
    }
    return String;
  }
  else
  {
    _invalid_parameter();
    return 0;
  }
}
