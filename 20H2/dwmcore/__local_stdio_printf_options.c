/*
 * XREFs of __local_stdio_printf_options @ 0x1800E290C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x1800E28F0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x1800E2940 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800E2980 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x1800E369C (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800E3AF8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800E3DD8 (_vsnwprintf.c)
 *     swprintf_s @ 0x1800E3E40 (swprintf_s.c)
 *     _vsnprintf @ 0x1800E3E98 (_vsnprintf.c)
 *     _scprintf @ 0x1800E3F00 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
