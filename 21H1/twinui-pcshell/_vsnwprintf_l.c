/*
 * XREFs of _vsnwprintf_l @ 0x180443F6C
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x1802C9124 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1802CA760 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     StringVPrintfWorkerW @ 0x18043BA9C (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180034A34 (__local_stdio_printf_options.c)
 */

int __cdecl vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 v9; // rcx
  int result; // eax

  v9 = *_local_stdio_printf_options();
  result = __stdio_common_vswprintf(v9 | 1, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
