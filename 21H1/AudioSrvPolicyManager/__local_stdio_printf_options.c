/*
 * XREFs of __local_stdio_printf_options @ 0x18003EB6C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x18003EB50 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18003EB80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18003EBC0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003FB6C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800400A4 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18004010C (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
