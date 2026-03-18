/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C009A288
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C001C29C (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C009A2F0 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C00AA2D4 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00F4440 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(KSPIN_LOCK *a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent((__int64)a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList(a1 + 218, (_QWORD *)a2, 0LL);
}
