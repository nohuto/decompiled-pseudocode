/*
 * XREFs of ?vRop2FunctionF@@YGXPAK00K@Z @ 0xB5756
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vRop2FunctionF(void *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  memset(a1, 255, 4 * a4);
}
