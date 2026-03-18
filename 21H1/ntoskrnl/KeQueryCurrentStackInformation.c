/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14032BCA0
 * Callers:
 *     RtlDispatchException @ 0x14032BD60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14032CAD0 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x14032E574 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x140509AC8 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405A9128 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C33D0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DBB24 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140208360 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
