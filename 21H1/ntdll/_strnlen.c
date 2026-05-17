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
  size_t result; // eax

  for ( result = 0; result < MaxCount; ++String )
  {
    if ( !*String )
      break;
    ++result;
  }
  return result;
}
