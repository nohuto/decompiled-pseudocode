/*
 * XREFs of NtClose @ 0x140707D60
 * Callers:
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A8490 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403A8550 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A85B0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x14058E730 (RtlQueryValidationRunlevel.c)
 *     AlpcpCreateConnectionPort @ 0x140608E98 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x14061D260 (NtCreateRegistryTransaction.c)
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     PfpVolumeOpenAndVerify @ 0x1406746EC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140676234 (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140676358 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x140676ED0 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x140677260 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140677798 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1406786A4 (PfpReadSupportCleanup.c)
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406BE55C (PfpSourceGetPrefetchSupport.c)
 *     PfpPrefetchPrivatePages @ 0x1406BE720 (PfpPrefetchPrivatePages.c)
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1406CED1C (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140731E20 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpLoadLanguageConfigList @ 0x14078F860 (RtlpLoadLanguageConfigList.c)
 *     CmpInitializeLazyWriters @ 0x140790998 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14079EBB8 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBBB8 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1408686E0 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140891620 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140915FE8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     sub_140A38A14 @ 0x140A38A14 (sub_140A38A14.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4CB0C (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A68640 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6CB14 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A6F368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A706AC (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A73948 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8D3D0 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x1403535B0 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380BA0 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140516160 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
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
  signed __int64 *v12; // rsi
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
    v11 = (signed __int64 *)ExpLookupHandleTableEntry(Count, v1);
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
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v9[1].ProfileListHead.Blink);
  return v13;
}
