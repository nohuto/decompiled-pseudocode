/*
 * XREFs of __local_stdio_scanf_options @ 0x18003EBA4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18003EB80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18003EBC0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003FB6C (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
