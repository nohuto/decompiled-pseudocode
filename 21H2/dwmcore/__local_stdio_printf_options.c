/*
 * XREFs of __local_stdio_printf_options @ 0x1801005F4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1801005D0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180100620 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1801016C8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1801019B8 (_vsnwprintf.c)
 *     swprintf_s @ 0x180101A20 (swprintf_s.c)
 *     _vsnprintf @ 0x180101A78 (_vsnprintf.c)
 *     vsprintf_s @ 0x180101AE0 (vsprintf_s.c)
 *     _vscprintf @ 0x180101B44 (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
