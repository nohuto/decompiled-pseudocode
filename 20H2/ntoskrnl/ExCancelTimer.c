/*
 * XREFs of ExCancelTimer @ 0x14033BF90
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14033C954 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
