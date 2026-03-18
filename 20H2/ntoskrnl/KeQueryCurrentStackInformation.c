/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1402E72F0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402D8608 (RtlpIsFrameInBoundsEx.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     PnprGetStackLimits @ 0x14050DA48 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A5704 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AD378 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AE8B4 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C9400 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409E1BA4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402265F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FC380 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(char *a1, struct _KPRCB **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
