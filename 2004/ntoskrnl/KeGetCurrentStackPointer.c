/*
 * XREFs of KeGetCurrentStackPointer @ 0x1403F77B0
 * Callers:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x1402E6B60 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402F85A0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F8700 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PnprGetStackLimits @ 0x14050A118 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140580954 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AAD54 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1409C2BF4 (MmVerifierTrimMemory.c)
 *     VfUtilCaptureViolationKernelStack @ 0x1409C33E0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1409DBB84 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
