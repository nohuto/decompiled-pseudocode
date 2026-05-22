/*
 * XREFs of __local_stdio_printf_options @ 0x18003290C
 * Callers:
 *     _vsnwprintf_l @ 0x180032898 (_vsnwprintf_l.c)
 *     initialize_printf_standard_rounding @ 0x18003B360 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18003B380 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18003B3C0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003B87C (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf_s @ 0x18003C954 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x18003CA0C (_vsnprintf_s.c)
 *     sprintf_s @ 0x18003CA7C (sprintf_s.c)
 *     _scprintf @ 0x18003CAD4 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
