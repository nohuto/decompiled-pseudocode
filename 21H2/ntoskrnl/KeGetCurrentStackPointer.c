/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403FE5D0
 * Callers:
 *     RtlWalkFrameChain @ 0x14021CEB0 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x140277230 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14032A0D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14032A230 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x140350450 (RtlpGetStackLimits.c)
 *     PnprGetStackLimits @ 0x14050F578 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140585CC4 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A7134 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B02B4 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C5C04 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C63F0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DEB94 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
