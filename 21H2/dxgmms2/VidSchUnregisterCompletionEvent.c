/*
 * XREFs of VidSchUnregisterCompletionEvent @ 0x1C00F5BCC
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0013D94 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 */

bool __fastcall VidSchUnregisterCompletionEvent(__int64 a1, _QWORD *a2)
{
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1744), a2, 0LL);
}
