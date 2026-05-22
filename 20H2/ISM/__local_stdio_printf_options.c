/*
 * XREFs of __local_stdio_printf_options @ 0x1800329DC
 * Callers:
 *     _vsnwprintf_l @ 0x180032968 (_vsnwprintf_l.c)
 *     initialize_printf_standard_rounding @ 0x18003B6A0 (initialize_printf_standard_rounding.c)
 *     initialize_legacy_wide_specifiers @ 0x18003B6C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18003B700 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003BBBC (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf_s @ 0x18003CC94 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x18003CD4C (_vsnprintf_s.c)
 *     sprintf_s @ 0x18003CDBC (sprintf_s.c)
 *     _scprintf @ 0x18003CE14 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
