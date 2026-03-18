/*
 * XREFs of _vsnwprintf @ 0x1801019B8
 * Callers:
 *     StringVPrintfWorkerW @ 0x180025E78 (StringVPrintfWorkerW.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180076EB8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801005F4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1801017D2 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
