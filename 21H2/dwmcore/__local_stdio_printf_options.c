/*
 * XREFs of __local_stdio_printf_options @ 0x1800E6D5C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x1800E6D40 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x1800E6D90 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800E6DD0 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x1800E7AEC (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800E7F48 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800E8228 (_vsnwprintf.c)
 *     swprintf_s @ 0x1800E8290 (swprintf_s.c)
 *     _vsnprintf @ 0x1800E82E8 (_vsnprintf.c)
 *     _scprintf @ 0x1800E8350 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
