/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000B130
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0068170 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 416) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
