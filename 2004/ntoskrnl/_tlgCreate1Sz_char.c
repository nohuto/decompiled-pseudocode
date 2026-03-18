/*
 * XREFs of _tlgCreate1Sz_char @ 0x140276C08
 * Callers:
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x1403115C8 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140311A80 (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140328784 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x1403568E0 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14039D70C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A1CE8 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140526234 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405263B0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1405264D0 (MiLogResetPagesCommitRelease.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x140703E28 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14076D6BC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14076D814 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076D8C0 (PopBatteryCheckCompositeCapacity.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C40F4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C49CC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x1408C8158 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C8440 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E4E94 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408E9524 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A527DC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &Src;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
