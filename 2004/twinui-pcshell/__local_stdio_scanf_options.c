/*
 * XREFs of __local_stdio_scanf_options @ 0x18008CBE4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18008CBC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18008CC00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008D828 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf @ 0x18008E024 (swscanf.c)
 *     swscanf_s @ 0x18008E074 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
