/*
 * XREFs of __strlwr @ 0x4B2F7410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl _strlwr(char *String)
{
  char *v1; // edx
  char i; // cl

  v1 = String;
  for ( i = *String; i; i = *v1 )
  {
    if ( (unsigned __int8)(i - 65) <= 0x19u )
      *v1 = i + 32;
    ++v1;
  }
  return String;
}
