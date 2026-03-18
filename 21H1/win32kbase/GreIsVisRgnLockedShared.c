/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C01550E0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00448B0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread((struct _ERESOURCE *)ghsemDCVisRgn);
}
