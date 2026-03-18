/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00523E0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00523C0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C014ED90 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
