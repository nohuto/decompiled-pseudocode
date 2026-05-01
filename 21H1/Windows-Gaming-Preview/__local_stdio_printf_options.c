/*
 * XREFs of __local_stdio_printf_options @ 0x180043DEC
 * Callers:
 *     initialize_printf_standard_rounding @ 0x180043DD0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x180043E00 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180043E40 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180044E3C (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x180045514 (wprintf.c)
 *     _vsnwprintf @ 0x180045568 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x1800455D0 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
