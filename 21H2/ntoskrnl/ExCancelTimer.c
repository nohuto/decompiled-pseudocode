/*
 * XREFs of ExCancelTimer @ 0x1402D3E10
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1402D57D4 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
