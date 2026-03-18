/*
 * XREFs of EngIsSemaphoreOwnedByCurrentThread @ 0x1C00A0F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwnedByCurrentThread(HSEMAPHORE hsem)
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)hsem);
}
