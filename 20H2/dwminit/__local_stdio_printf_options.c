/*
 * XREFs of __local_stdio_printf_options @ 0x180004DDC
 * Callers:
 *     initialize_printf_standard_rounding @ 0x180004DC0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x180004DF0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180004E30 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x180005818 (_vsnwprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800061BC (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
