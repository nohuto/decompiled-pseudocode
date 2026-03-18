/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1402E6B60
 * Callers:
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x1402E7990 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402E9434 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x14050A118 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405A9818 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AAD54 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C33E0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DBB84 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14029AE70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403F77B0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
