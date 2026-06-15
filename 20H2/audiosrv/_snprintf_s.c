/*
 * XREFs of _snprintf_s @ 0x18006AF94
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180133388 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800696FC (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x18006AC46 (_o___stdio_common_vsnprintf_s_0.c)
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
