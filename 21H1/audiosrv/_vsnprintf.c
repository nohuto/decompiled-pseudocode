/*
 * XREFs of _vsnprintf @ 0x18006B71C
 * Callers:
 *     ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x18013D384 (-StringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180069F5C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x18006B4B2 (_o___stdio_common_vsprintf_0.c)
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
