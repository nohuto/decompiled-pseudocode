/*
 * XREFs of PopFxAddRefDevice @ 0x140355350
 * Callers:
 *     PopFxActivateDevice @ 0x1402D2864 (PopFxActivateDevice.c)
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140355534 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1403B1998 (PopFxQueueWorkOrder.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1405CAE90 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x1405CB6D8 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CCCFC (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
