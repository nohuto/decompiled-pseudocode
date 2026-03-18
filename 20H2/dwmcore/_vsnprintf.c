/*
 * XREFs of _vsnprintf @ 0x1800E3E98
 * Callers:
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801F88D4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800E290C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x1800E3C6A (_o___stdio_common_vsprintf_0.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
