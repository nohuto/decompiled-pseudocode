/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00448B0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C0044890 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C01550E0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
