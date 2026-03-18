/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x14098D5C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1403804F0 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x14098D698 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C234A8 = PopCaptureTimeOnProcZero();
  qword_140C23470 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C23468 - HypervisorTscAdjustment;
  qword_140C23498 = HypervisorTscAdjustment;
  result = qword_140C23490 + HypervisorTscAdjustment;
  qword_140C23480 -= result;
  qword_140C234A0 -= result;
  qword_140C23468 = v1;
  qword_140C234A8 -= result;
  qword_140C233F8 = v1 - qword_140C23400;
  return result;
}
