/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000B900
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007F210 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 416) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
