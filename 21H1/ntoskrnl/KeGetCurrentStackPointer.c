/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403F6520
 * Callers:
 *     RtlpGetStackLimits @ 0x140208310 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x14032BCA0 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140354580 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PnprGetStackLimits @ 0x140509AC8 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405801D4 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C2BE4 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C33D0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DBB24 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
