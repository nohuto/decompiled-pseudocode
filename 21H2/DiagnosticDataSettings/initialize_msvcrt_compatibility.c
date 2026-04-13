/*
 * XREFs of initialize_msvcrt_compatibility @ 0x10003F10
 * Callers:
 *     <none>
 * Callees:
 *     ___local_stdio_printf_options @ 0x10003ED1 (___local_stdio_printf_options.c)
 *     ___local_stdio_scanf_options @ 0x10003EFF (___local_stdio_scanf_options.c)
 */

int initialize_msvcrt_compatibility()
{
  unsigned __int64 *v0; // eax
  int v1; // ecx
  unsigned __int64 *v2; // eax
  int v3; // ecx

  v0 = __local_stdio_printf_options();
  v1 = *((_DWORD *)v0 + 1);
  *(_DWORD *)v0 |= 0x18u;
  *((_DWORD *)v0 + 1) = v1;
  v2 = __local_stdio_scanf_options();
  v3 = *((_DWORD *)v2 + 1);
  *(_DWORD *)v2 |= 4u;
  *((_DWORD *)v2 + 1) = v3;
  return 0;
}
