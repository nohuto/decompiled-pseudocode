/*
 * XREFs of _EngIsSemaphoreSharedByCurrentThread@4 @ 0xEDF96
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return __imp__EngIsSemaphoreSharedByCurrentThread@4(hsem);
}
