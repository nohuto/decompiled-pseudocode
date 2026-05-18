/*
 * XREFs of vsnprintf @ 0x180125074
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_18000EA48 @ 0x18000EA48 (sub_18000EA48.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___stdio_common_vswprintf @ 0x1801238C3 (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_180123860();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
