/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00B4D70
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00B4E00 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState);
}
