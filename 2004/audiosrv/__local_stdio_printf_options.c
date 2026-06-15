/*
 * XREFs of __local_stdio_printf_options @ 0x18006A05C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x18006A040 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18006A180 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18006A1C0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18006B16C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18006B6A8 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18006B710 (vswprintf_s.c)
 *     _vscwprintf @ 0x18006B774 (_vscwprintf.c)
 *     swprintf_s @ 0x18006B7C4 (swprintf_s.c)
 *     _vsnprintf @ 0x18006B81C (_vsnprintf.c)
 *     _vsnprintf_s @ 0x18006B884 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x18006B8F4 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
