/*
 * XREFs of _tlgCreate1Sz_char @ 0x14023CD10
 * Callers:
 *     MiAgeWorkingSet @ 0x140269E60 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402FF324 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x14031AC60 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14031B118 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14039CAFC (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A41B8 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140529C04 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140529D80 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140529EA0 (MiLogResetPagesCommitRelease.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406D72E4 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14077C0EC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14077C244 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14077C2F0 (PopBatteryCheckCompositeCapacity.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C9F34 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408CA80C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x1408CDF98 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CE280 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408EAAA4 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408EF134 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A52E5C (MiFlushStrongCodeDriverLoadFailures.c)
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
