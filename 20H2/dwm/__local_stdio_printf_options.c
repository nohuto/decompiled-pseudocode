/*
 * XREFs of __local_stdio_printf_options @ 0x140002D94
 * Callers:
 *     initialize_printf_standard_rounding @ 0x140002E60 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x140002E80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x140002EC0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x140003AAC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s_l @ 0x14000C06C (_vsnprintf_s_l.c)
 *     _vsnwprintf_l @ 0x14000C0E8 (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
