/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x140330EEC
 * Callers:
 *     MiLogProcessWorkingSetsStart @ 0x140244BA8 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x140244C14 (MiLogProcessWorkingSetsStop.c)
 *     MiAgeWorkingSet @ 0x140269E60 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402FF324 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x14031AC60 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14031B118 (MiLogTrimWs.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14033F378 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiStoreLogNotCandidate @ 0x14038CE88 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x14038D1A0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x14039CAFC (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A41B8 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BDA28 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BDB38 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140529C04 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140529D80 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140529EA0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140552B48 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140552BB8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140552C54 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140552D14 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140552EB8 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x140553030 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x14055DBA8 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x14057CB90 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14057CD68 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x14057CE80 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14057D014 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x14057D1C4 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405A23DC (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x1405A251C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405A2610 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405A2708 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405A2808 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C9494 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C9F34 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408CA80C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408CDB00 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CDF98 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CE280 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CE628 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D9C24 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A52E5C (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v9.Keyword = *(_QWORD *)(a2 + 3);
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)(a2 + 11);
  a8->Reserved = 2;
  a8[1].Size = *(unsigned __int16 *)(a2 + 11);
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v9, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
