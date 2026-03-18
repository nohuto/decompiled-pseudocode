/*
 * XREFs of VidSchUnregisterCompletionEvent @ 0x1C00D4500
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0012038 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 */

bool __fastcall VidSchUnregisterCompletionEvent(__int64 a1, _QWORD *a2)
{
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1728), a2, 0LL);
}
