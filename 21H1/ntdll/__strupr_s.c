/*
 * XREFs of __strupr_s @ 0x4B2F7500
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _strnlen @ 0x4B2FA080 (_strnlen.c)
 */

errno_t __cdecl _strupr_s(char *String, size_t Size)
{
  char *v2; // esi
  char v4; // cl
  size_t v5; // [esp-4h] [ebp-8h]

  v2 = String;
  if ( !String )
    goto LABEL_2;
  LODWORD(v5) = Size;
  if ( (unsigned int)strnlen(String, v5) >= (unsigned int)Size )
  {
    *String = 0;
LABEL_2:
    _invalid_parameter();
    return 22;
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int8)(v4 - 97) <= 0x19u )
      *v2 = v4 - 32;
    ++v2;
  }
  return 0;
}
