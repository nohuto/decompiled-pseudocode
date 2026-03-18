/*
 * XREFs of EngDeleteSemaphore @ 0x1C00B61B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C005E3E0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
