/*
 * XREFs of ExCancelTimer @ 0x140275200
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093C064 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402754B0 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1402759E4 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
