/*
 * XREFs of _vsnprintf_s @ 0x14001DFEC
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x14003C464 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x14001CC6C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x14001DE2E (_o___stdio_common_vsnprintf_s_0.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
