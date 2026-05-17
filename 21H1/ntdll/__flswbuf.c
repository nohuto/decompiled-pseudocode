/*
 * XREFs of __flswbuf @ 0x4B2FEF27
 * Callers:
 *     __fputwc_nolock @ 0x4B2FEE10 (__fputwc_nolock.c)
 * Callees:
 *     <none>
 */

int __cdecl _flswbuf(int a1, int a2)
{
  *(_DWORD *)(a2 + 12) |= 0x20u;
  return 0xFFFF;
}
