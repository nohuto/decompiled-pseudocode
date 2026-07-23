/*
 * XREFs of __wcsupr_s @ 0x4B2F7F90
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 */

errno_t __cdecl _wcsupr_s(wchar_t *String, size_t Size)
{
  wchar_t *v2; // esi
  wchar_t v4; // cx
  size_t v5; // [esp-4h] [ebp-8h]

  v2 = String;
  if ( !String )
    goto LABEL_2;
  LODWORD(v5) = Size;
  if ( (unsigned int)wcsnlen(String, v5) >= (unsigned int)Size )
  {
    *String = 0;
LABEL_2:
    _invalid_parameter();
    return 22;
  }
  if ( *String )
  {
    v4 = *String;
    do
    {
      if ( (unsigned __int16)(v4 - 97) <= 0x19u )
        *v2 = v4 - 32;
      v4 = *++v2;
    }
    while ( *v2 );
  }
  return 0;
}
