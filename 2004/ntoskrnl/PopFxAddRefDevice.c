/*
 * XREFs of PopFxAddRefDevice @ 0x1402CA530
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1402C9CA0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentWorker @ 0x1402CA494 (PopFxActivateComponentWorker.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x14037F228 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140563F60 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405641D4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140564914 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140566148 (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E0F10 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1402CA580 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140563F3C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
