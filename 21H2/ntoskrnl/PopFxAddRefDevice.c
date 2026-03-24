/*
 * XREFs of PopFxAddRefDevice @ 0x14026077C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402606E0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140260EC0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x140381658 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569410 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140569684 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140569DC4 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B594 (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E4550 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1402607C0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1405693EC (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
