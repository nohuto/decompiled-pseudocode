/*
 * XREFs of ?vRop2FunctionC@@YGXPAK00K@Z @ 0xAD42C
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vRop2FunctionC(void *a1, unsigned int *a2, void *Src, unsigned int a4)
{
  memcpy(a1, Src, 4 * a4);
}
