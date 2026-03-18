/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x1409935B8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1403822B0 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140993688 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C23968 = PopCaptureTimeOnProcZero();
  qword_140C23930 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C23928 - HypervisorTscAdjustment;
  qword_140C23958 = HypervisorTscAdjustment;
  result = qword_140C23950 + HypervisorTscAdjustment;
  qword_140C23940 -= result;
  qword_140C23960 -= result;
  qword_140C23928 = v1;
  qword_140C23968 -= result;
  qword_140C238B8 = v1 - qword_140C238C0;
  return result;
}
