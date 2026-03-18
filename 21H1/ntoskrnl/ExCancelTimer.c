/*
 * XREFs of ExCancelTimer @ 0x14035B3B0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093ADC4 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14035BB94 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
