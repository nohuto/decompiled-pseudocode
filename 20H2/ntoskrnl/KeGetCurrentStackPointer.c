/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403FC380
 * Callers:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402AD4E0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AD640 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     PnprGetStackLimits @ 0x14050DA48 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405842B4 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A5704 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AE8B4 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C8C14 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C9400 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409E1BA4 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
