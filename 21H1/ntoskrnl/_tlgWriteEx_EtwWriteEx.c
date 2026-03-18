/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x14032274C
 * Callers:
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStart @ 0x1402D5E84 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x1402D5EF0 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402D8118 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402EF5C4 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x14030C4DC (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14030C994 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x140389B18 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x140389E30 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x14039CF7C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A1558 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BA258 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BA368 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140525BE4 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140525D60 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140525E80 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x14054EB28 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14054EB98 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14054EC34 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14054ECF4 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14054EE98 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14054F010 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x140559B88 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x140578B20 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140578CF8 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140578E10 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x140578FA4 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x140579154 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x14059E24C (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x14059E38C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x14059E480 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x14059E578 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14059E678 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C2304 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C2DA4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C367C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408C6970 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408C6E08 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C70F0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408C7498 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D2A94 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A4CADC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
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
