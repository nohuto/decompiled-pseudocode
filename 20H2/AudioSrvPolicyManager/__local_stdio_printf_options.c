/*
 * XREFs of __local_stdio_printf_options @ 0x1800392AC
 * Callers:
 *     initialize_printf_standard_rounding @ 0x180039290 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x1800392C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180039300 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003A2AC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18003A7E4 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18003A84C (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
