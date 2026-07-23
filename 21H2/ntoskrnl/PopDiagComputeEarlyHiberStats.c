/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x1409915B8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140382AA4 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140991688 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C240C8 = PopCaptureTimeOnProcZero();
  qword_140C24090 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C24088 - HypervisorTscAdjustment;
  qword_140C240B8 = HypervisorTscAdjustment;
  result = qword_140C240B0 + HypervisorTscAdjustment;
  qword_140C240A0 -= result;
  qword_140C240C0 -= result;
  qword_140C24088 = v1;
  qword_140C240C8 -= result;
  qword_140C24018 = v1 - qword_140C24020;
  return result;
}
