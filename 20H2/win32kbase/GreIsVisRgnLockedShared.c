/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C014C940
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00B2A70 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread((struct _ERESOURCE *)ghsemDCVisRgn);
}
