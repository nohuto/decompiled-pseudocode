/*
 * XREFs of _strnlen @ 0x4B2FA080
 * Callers:
 *     __strlwr_s @ 0x4B2F7440 (__strlwr_s.c)
 *     __strupr_s @ 0x4B2F7500 (__strupr_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  size_t result; // rax

  LODWORD(result) = 0;
  if ( (_DWORD)MaxCount )
  {
    do
    {
      if ( !*String )
        break;
      LODWORD(result) = result + 1;
      ++String;
    }
    while ( (unsigned int)result < (unsigned int)MaxCount );
  }
  return result;
}
