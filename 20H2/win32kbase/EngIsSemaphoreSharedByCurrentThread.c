/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C00B2A50
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00B2A70 (GreIsSemaphoreSharedByCurrentThread.c)
 */

BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
