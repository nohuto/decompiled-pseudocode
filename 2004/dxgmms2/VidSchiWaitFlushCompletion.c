/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C008067C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002FA94 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushHwQueue @ 0x1C0034DE0 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C0080380 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0080500 (VidSchFlushDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00D11E8 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D40 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1728), (_QWORD *)a2, 0LL);
}
