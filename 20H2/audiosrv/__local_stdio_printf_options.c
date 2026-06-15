/*
 * XREFs of __local_stdio_printf_options @ 0x1800696FC
 * Callers:
 *     initialize_printf_standard_rounding @ 0x1800696E0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x180069820 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180069860 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18006A80C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18006AD48 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18006ADB0 (vswprintf_s.c)
 *     _vscwprintf @ 0x18006AE14 (_vscwprintf.c)
 *     swprintf_s @ 0x18006AE64 (swprintf_s.c)
 *     _vsnprintf @ 0x18006AEBC (_vsnprintf.c)
 *     _vsnprintf_s @ 0x18006AF24 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x18006AF94 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
