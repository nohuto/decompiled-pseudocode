/*
 * XREFs of NtClose @ 0x140611680
 * Callers:
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B712C (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403B71EC (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B724C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x14058CAF0 (RtlQueryValidationRunlevel.c)
 *     AlpcpConnectPort @ 0x1405E658C (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     PfSnPrefetchMetadata @ 0x140633050 (PfSnPrefetchMetadata.c)
 *     PfpReadSupportCleanup @ 0x1406334AC (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x1406336AC (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x140633B00 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140634038 (PfSnGetSectionObject.c)
 *     PfSnGetPrefetchInstructions @ 0x140659F38 (PfSnGetPrefetchInstructions.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406B96B8 (PfpSourceGetPrefetchSupport.c)
 *     NtSecureConnectPort @ 0x1406BF9C0 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406CD198 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406DDFB0 (NtCreateRegistryTransaction.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406E7EB4 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1406E85D0 (PfSnIsVolumeMounted.c)
 *     PfpPrefetchPrivatePages @ 0x1406F1214 (PfpPrefetchPrivatePages.c)
 *     PfpVolumeOpenAndVerify @ 0x1406F1C64 (PfpVolumeOpenAndVerify.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14072D9F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpInitializeLazyWriters @ 0x14078FCF8 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x1407A3880 (RtlpLoadLanguageConfigList.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407B90A8 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407C7758 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x14086A960 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140893EF0 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x1409186D8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094A16C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     sub_140A3AA14 @ 0x140A3AA14 (sub_140A3AA14.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A6A0D0 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A6B21C (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6EB94 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A713E8 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A7272C (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A759C8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8F570 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExLockHandleTableEntry @ 0x14021E890 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x14021E8F0 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380810 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1405143E0 (KeRaiseUserException.c)
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  unsigned __int64 v1; // rbx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  struct _KPROCESS *Process; // r13
  PEPROCESS v6; // r12
  __int64 v7; // rbp
  signed __int64 *v8; // rax
  signed __int64 *v9; // rsi
  NTSTATUS v10; // edi
  ULONG_PTR v12; // rcx
  char v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = (unsigned __int64)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v12);
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Process = CurrentThread->ApcState.Process;
  v13 = 0;
  if ( ObpIsKernelHandle(v1, PreviousMode) )
  {
    v7 = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
  }
  else
  {
    v6 = Process;
    if ( KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      v7 = Process[1].AffinityPadding[8];
      if ( v7 != ObpKernelHandleTable )
        goto LABEL_5;
      return -1073741816;
    }
    v7 = ObReferenceProcessHandleTable(Process);
    if ( !v7 )
      return -1073741816;
    v4 = 1;
  }
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) != 0 )
  {
    v8 = (signed __int64 *)ExpLookupHandleTableEntry(v7, v1);
    v9 = v8;
    if ( v8 )
    {
      if ( ExLockHandleTableEntry(v7, v8) )
      {
        v10 = ObCloseHandleTableEntry(v7, v9, v6, v1, PreviousMode, 0);
        goto LABEL_9;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
    goto LABEL_14;
  ExQueryHandleExceptionsPermanency(v7, &v14, &v13);
  if ( (*(_BYTE *)(v7 + 44) & 0x10) != 0 && v13 )
    ExHandleLogBadReference(v7, v1, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].AffinityPadding[4]
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
    }
    goto LABEL_14;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].AffinityPadding[9] && !*(_QWORD *)(v7 + 96) )
  {
LABEL_14:
    v10 = -1073741816;
    if ( v1 + 6 <= 5 )
      v10 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v10 = -1073741816;
  else
    v10 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v6[1].ProfileListHead.Blink);
  return v10;
}
