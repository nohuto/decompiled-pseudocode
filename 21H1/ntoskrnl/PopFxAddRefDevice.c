/*
 * XREFs of PopFxAddRefDevice @ 0x140237700
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140236E70 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentWorker @ 0x140237664 (PopFxActivateComponentWorker.c)
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x14037E838 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140563910 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140563B84 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x1405642C4 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140565AF8 (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408DFC90 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140237750 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
