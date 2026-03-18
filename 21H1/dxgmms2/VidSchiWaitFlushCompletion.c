/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C008069C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002FB14 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushHwQueue @ 0x1C0034E60 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C00803A0 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00D1208 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00D2960 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C40 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D60 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1728), (_QWORD *)a2, 0LL);
}
