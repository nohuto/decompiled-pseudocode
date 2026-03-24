/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x1409905B8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1403828F4 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140990688 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C23AA8 = PopCaptureTimeOnProcZero();
  qword_140C23A70 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C23A68 - HypervisorTscAdjustment;
  qword_140C23A98 = HypervisorTscAdjustment;
  result = qword_140C23A90 + HypervisorTscAdjustment;
  qword_140C23A80 -= result;
  qword_140C23AA0 -= result;
  qword_140C23A68 = v1;
  qword_140C23AA8 -= result;
  qword_140C239F8 = v1 - qword_140C23A00;
  return result;
}
