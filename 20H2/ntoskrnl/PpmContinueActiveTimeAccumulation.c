/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14033E5D0
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14033E1F0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x1403986CC (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0A28 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140283880 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x14033E604 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
