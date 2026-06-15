/*
 * XREFs of __local_stdio_scanf_options @ 0x180069844
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180069820 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180069860 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18006A80C (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
