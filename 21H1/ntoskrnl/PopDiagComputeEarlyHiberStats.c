/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x14098CDB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14037FCB0 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x14098CE80 (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C23A68 = PopCaptureTimeOnProcZero();
  qword_140C23A30 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C23A28 - HypervisorTscAdjustment;
  qword_140C23A58 = HypervisorTscAdjustment;
  result = qword_140C23A50 + HypervisorTscAdjustment;
  qword_140C23A40 -= result;
  qword_140C23A60 -= result;
  qword_140C23A28 = v1;
  qword_140C23A68 -= result;
  qword_140C239B8 = v1 - qword_140C239C0;
  return result;
}
