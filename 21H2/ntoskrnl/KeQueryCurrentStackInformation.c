/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140277230
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D250 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x140275570 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x140277828 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x14050F578 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1405A7134 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AED78 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B02B4 (EtwpTraceLastBranchRecord.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C63F0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DEB94 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1403504A0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1403FE5D0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
