/*
 * XREFs of EngIsSemaphoreOwnedByCurrentThread @ 0x1C002F2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwnedByCurrentThread(HSEMAPHORE hsem)
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)hsem);
}
