/*
 * XREFs of ___local_stdio_scanf_options @ 0x10003EFF
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x10003EE0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x10003F10 (initialize_msvcrt_compatibility.c)
 *     ___scrt_initialize_default_local_stdio_options @ 0x10004343 (___scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl __local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
