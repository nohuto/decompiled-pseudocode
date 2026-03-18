/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000AE80
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 424) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
