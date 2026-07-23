/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403FE7B0
 * Callers:
 *     KeQueryCurrentStackInformation @ 0x1402651D0 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140334E20 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140334F80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     PnprGetStackLimits @ 0x14050F7B8 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585EF4 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C6C04 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C73F0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DFB94 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
