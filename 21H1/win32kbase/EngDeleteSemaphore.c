/*
 * XREFs of EngDeleteSemaphore @ 0x1C00488F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00735F0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
