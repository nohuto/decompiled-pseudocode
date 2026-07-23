/*
 * XREFs of PopFxAddRefDevice @ 0x140281C48
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140281BAC (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140282390 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x1403811A8 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569650 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x14056A004 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B7D4 (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E46B0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
