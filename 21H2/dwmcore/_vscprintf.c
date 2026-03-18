/*
 * XREFs of _vscprintf @ 0x180101B44
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802622DC (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801005F4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x1801017BA (_o___stdio_common_vsprintf_0.c)
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
