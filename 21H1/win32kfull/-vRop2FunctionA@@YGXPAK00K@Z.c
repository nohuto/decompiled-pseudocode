/*
 * XREFs of ?vRop2FunctionA@@YGXPAK00K@Z @ 0xB5738
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vRop2FunctionA(void *a1, void *Src, unsigned int *a3, unsigned int a4)
{
  memcpy(a1, Src, 4 * a4);
}
