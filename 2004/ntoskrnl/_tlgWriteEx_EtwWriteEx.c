/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x14036005C
 * Callers:
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStart @ 0x14026C4E4 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14026C550 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402E4228 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogWsEmptyControl @ 0x1403115C8 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140311A80 (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140328784 (MmNotifyProcessInSwapTrigger.c)
 *     MiStoreLogNotCandidate @ 0x14038AB88 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x14038AEA0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x14039D70C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A1CE8 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BB5A8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BB6B8 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140526234 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405263B0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1405264D0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x14054F178 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14054F1E8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14054F284 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14054F344 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14054F4E8 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14054F660 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x14055A1D8 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x140579160 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140579338 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140579450 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1405795E4 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x140579794 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x14059E93C (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x14059EA7C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x14059EB70 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x14059EC68 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14059ED68 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C3654 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C40F4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C49CC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408C7CC0 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408C8158 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C8440 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408C87E8 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D3DE4 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A527DC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
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
