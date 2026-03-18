/*
 * XREFs of _tlgCreate1Sz_char @ 0x14033DAA4
 * Callers:
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402EF5C4 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x14030C4DC (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14030C994 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14039CF7C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A1558 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140525BE4 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140525D60 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140525E80 (MiLogResetPagesCommitRelease.c)
 *     EtwpCoverageRecord @ 0x1406E12B4 (EtwpCoverageRecord.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14076AF1C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14076B074 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14076B120 (PopBatteryCheckCompositeCapacity.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C2DA4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C367C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x1408C6E08 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C70F0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E3C14 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408E82A4 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A4CADC (MiFlushStrongCodeDriverLoadFailures.c)
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
