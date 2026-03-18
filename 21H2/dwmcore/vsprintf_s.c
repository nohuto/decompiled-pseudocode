/*
 * XREFs of vsprintf_s @ 0x180101AE0
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802622DC (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801005F4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x1801017C6 (_o___stdio_common_vsprintf_s_0.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
