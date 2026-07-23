/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1402651D0
 * Callers:
 *     RtlDispatchException @ 0x140263510 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402639D0 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402657C8 (RtlpIsFrameInBoundsEx.c)
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 *     PnprGetStackLimits @ 0x14050F7B8 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AEFA8 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C73F0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DFB94 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14035B1F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FE7B0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
