/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00B2A70
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00B2A50 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C014C940 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
