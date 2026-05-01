/*
 * XREFs of _vscwprintf @ 0x18008D670
 * Callers:
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x18043AEEC (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180034A34 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18008D522 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
