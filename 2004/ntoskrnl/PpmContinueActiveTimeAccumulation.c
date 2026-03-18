/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14033F2D8
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140298220 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14039620C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403BF3A8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140218E10 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x14033F30C (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
