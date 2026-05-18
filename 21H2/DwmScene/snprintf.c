/*
 * XREFs of snprintf @ 0x1801251F0
 * Callers:
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___stdio_common_vsprintf @ 0x1801238B7 (_o___stdio_common_vsprintf.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180123860();
  result = o___stdio_common_vsprintf();
  if ( result < 0 )
    return -1;
  return result;
}
