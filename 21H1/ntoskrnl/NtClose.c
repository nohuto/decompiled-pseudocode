/*
 * XREFs of NtClose @ 0x14062C900
 * Callers:
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3914 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403B39D4 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3A34 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405889D0 (RtlQueryValidationRunlevel.c)
 *     PfpVolumeOpenAndVerify @ 0x1405D27B4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchPrivatePages @ 0x1405D3E50 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405D4148 (PfpSourceGetPrefetchSupport.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     PfSnPopulateReadList @ 0x140639A20 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140639F58 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1406409F4 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140640A50 (PfpFileBuildReadSupport.c)
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     PfSnGetPrefetchInstructions @ 0x140652B5C (PfSnGetPrefetchInstructions.c)
 *     PfSnIsVolumeMounted @ 0x140670844 (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140670968 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1406C3990 (PfSnPrefetchMetadata.c)
 *     AlpcpCreateConnectionPort @ 0x1406D6E78 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406E8070 (NtCreateRegistryTransaction.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14071DC60 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpInitializeLazyWriters @ 0x140788418 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x1407947A0 (RtlpLoadLanguageConfigList.c)
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407A8008 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B5D58 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x140863C20 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x14088D080 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140911818 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     sub_140A34A14 @ 0x140A34A14 (sub_140A34A14.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A5FC10 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A6456C (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140A67EE4 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A6A87C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6BBC0 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A6E9C4 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8A2D0 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037E020 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140510460 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  unsigned __int64 v1; // rbx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  struct _EX_RUNDOWN_REF *Process; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PEPROCESS v9; // r12
  unsigned __int64 Count; // rbp
  signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rsi
  NTSTATUS v13; // edi
  ULONG_PTR v15; // rcx
  char v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+10h] BYREF

  v1 = (unsigned __int64)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v15);
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v16 = 0;
  if ( ObpIsKernelHandle(v1, PreviousMode) )
  {
    Count = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v9 = PsInitialSystemProcess;
  }
  else
  {
    v9 = (PEPROCESS)Process;
    if ( KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      Count = Process[174].Count;
      if ( Count != ObpKernelHandleTable )
        goto LABEL_5;
      return -1073741816;
    }
    Count = ObReferenceProcessHandleTable(Process);
    if ( !Count )
      return -1073741816;
    v4 = 1;
  }
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) != 0 )
  {
    v11 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)Count, v1);
    v12 = v11;
    if ( v11 )
    {
      if ( ExLockHandleTableEntry(Count, v11) )
      {
        v13 = ObCloseHandleTableEntry(Count, v12, v9, v1, PreviousMode, 0);
        goto LABEL_9;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
    goto LABEL_14;
  ExQueryHandleExceptionsPermanency(Count, &v17, &v16);
  if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v16 )
    ExHandleLogBadReference(Count, v1, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 && Process[170].Count && (_BYTE)KdDebuggerEnabled )
      KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[175].Count && !*(_QWORD *)(Count + 96) )
  {
LABEL_14:
    v13 = -1073741816;
    if ( v1 + 6 <= 5 )
      v13 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v13 = -1073741816;
  else
    v13 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v9[1].ProfileListHead.Blink);
  return v13;
}
