/*
 * XREFs of PopFxAddRefDevice @ 0x1402461CC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140246130 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140246910 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x140380F58 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140567940 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140567BB4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140569B7C (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E6D50 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140246210 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
