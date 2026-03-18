/*
 * XREFs of _EngIsSemaphoreOwned@4 @ 0xEDF8A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngIsSemaphoreOwned(HSEMAPHORE hsem)
{
  return __imp__EngIsSemaphoreOwned@4(hsem);
}
