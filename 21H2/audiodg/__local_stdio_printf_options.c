/*
 * XREFs of __local_stdio_printf_options @ 0x14001CC4C
 * Callers:
 *     initialize_printf_standard_rounding @ 0x14001CC30 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x14001CCC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001CD00 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001D6D0 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D82C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14001DF54 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x14001DFBC (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
