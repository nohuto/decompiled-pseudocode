/*
 * XREFs of KeGetCurrentStackPointer @ 0x14041FAB0
 * Callers:
 *     MiDoStackCopy @ 0x140200230 (MiDoStackCopy.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402AA9B0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F4850 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     EtwpTraceLastBranchRecord @ 0x1404608E8 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140562EBC (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405E47F4 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x140A81364 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140A81B20 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140A98E28 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
