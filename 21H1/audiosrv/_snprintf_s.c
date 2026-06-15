/*
 * XREFs of _snprintf_s @ 0x18006B7F4
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180134368 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180069F5C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x18006B4A6 (_o___stdio_common_vsnprintf_s_0.c)
 */

int snprintf_s(char *const Buffer, const size_t BufferCount, const size_t MaxCount, const char *const Format, ...)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
