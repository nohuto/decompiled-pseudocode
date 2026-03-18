/*
 * XREFs of EngDeleteSemaphore @ 0x1C00A3BD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00A55E0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
