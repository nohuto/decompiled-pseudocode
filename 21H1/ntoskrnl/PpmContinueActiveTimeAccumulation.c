/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14020511C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140205860 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14039563C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403BE418 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x140205150 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x140271E60 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
