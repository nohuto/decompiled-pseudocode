/*
 * XREFs of __local_stdio_printf_options @ 0x18000C60C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x18000C5F0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18000C620 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18000C660 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x18000D0B4 (_vsnwprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000DC74 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
