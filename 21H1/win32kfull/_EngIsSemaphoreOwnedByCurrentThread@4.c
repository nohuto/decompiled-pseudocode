/*
 * XREFs of _EngIsSemaphoreOwnedByCurrentThread@4 @ 0xEDF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngIsSemaphoreOwnedByCurrentThread(HSEMAPHORE hsem)
{
  return __imp__EngIsSemaphoreOwnedByCurrentThread@4(hsem);
}
