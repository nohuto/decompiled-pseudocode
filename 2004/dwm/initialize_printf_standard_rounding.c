/*
 * XREFs of initialize_printf_standard_rounding @ 0x140002E60
 * Callers:
 *     <none>
 * Callees:
 *     __local_stdio_printf_options @ 0x140002D94 (__local_stdio_printf_options.c)
 */

__int64 initialize_printf_standard_rounding()
{
  unsigned __int64 *v0; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 0x20uLL;
  return 0LL;
}
