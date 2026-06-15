/*
 * XREFs of __local_stdio_printf_options @ 0x14001C8DC
 * Callers:
 *     initialize_printf_standard_rounding @ 0x14001C8C0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x14001C950 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001C990 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001D370 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D4CC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14001DBF4 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x14001DC5C (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
