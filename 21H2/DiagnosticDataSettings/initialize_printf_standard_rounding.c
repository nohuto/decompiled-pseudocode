/*
 * XREFs of initialize_printf_standard_rounding @ 0x10003EC0
 * Callers:
 *     <none>
 * Callees:
 *     ___local_stdio_printf_options @ 0x10003ED1 (___local_stdio_printf_options.c)
 */

int initialize_printf_standard_rounding()
{
  unsigned __int64 *v0; // eax
  int v1; // ecx

  v0 = __local_stdio_printf_options();
  v1 = *((_DWORD *)v0 + 1);
  *(_DWORD *)v0 |= 0x20u;
  *((_DWORD *)v0 + 1) = v1;
  return 0;
}
