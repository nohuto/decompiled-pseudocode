/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C00695DC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002F7E4 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushHwQueue @ 0x1C0034B30 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C00692E0 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0069460 (VidSchFlushDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00D0BE8 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00148FC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0069CA0 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1728), (_QWORD *)a2, 0LL);
}
