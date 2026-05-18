/*
 * XREFs of vsnprintf @ 0x18011F7A4
 * Callers:
 *     sub_18000E8F0 @ 0x18000E8F0 (sub_18000E8F0.c)
 *     sub_18000E968 @ 0x18000E968 (sub_18000E968.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     _o___stdio_common_vswprintf @ 0x18011DFF3 (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_18011DF90();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
