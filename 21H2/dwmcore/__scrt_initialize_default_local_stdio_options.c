/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x1801016C8
 * Callers:
 *     dllmain_crt_process_attach @ 0x180100C68 (dllmain_crt_process_attach.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801005F4 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x180100604 (__local_stdio_scanf_options.c)
 */

unsigned __int64 *_scrt_initialize_default_local_stdio_options()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *result; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 0x24uLL;
  result = _local_stdio_scanf_options();
  *result |= 2uLL;
  return result;
}
