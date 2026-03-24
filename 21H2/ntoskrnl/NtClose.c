/*
 * XREFs of NtClose @ 0x1406F0980
 * Callers:
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403ACE1C (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403ACEDC (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403ACF3C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x14058E500 (RtlQueryValidationRunlevel.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     AlpcpCreateConnectionPort @ 0x1406AA7A8 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406BE000 (NtCreateRegistryTransaction.c)
 *     PfpVolumeOpenAndVerify @ 0x1406C5DFC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1406C7944 (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406C7A68 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1406C8184 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x1406C85E0 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x1406C8970 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1406C8EA8 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1406C9DB4 (PfpReadSupportCleanup.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CEC28 (PfSnGetPrefetchInstructions.c)
 *     PfpSourceGetPrefetchSupport @ 0x14070FF0C (PfpSourceGetPrefetchSupport.c)
 *     PfpPrefetchPrivatePages @ 0x1407100D0 (PfpPrefetchPrivatePages.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140731C60 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpInitializeLazyWriters @ 0x14078F3E8 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x140793AC0 (RtlpLoadLanguageConfigList.c)
 *     AdtpObjsInitialize @ 0x14079E4C0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14079E9B8 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBA48 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x140868580 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x1408914C0 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140915E88 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094793C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14094BFD0 (ExpWatchLicenseInfoWork.c)
 *     sub_140A37A14 @ 0x140A37A14 (sub_140A37A14.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41C04 (ExpWatchProductTypeInitialization.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A67640 (IopInitCrashDumpRegCallback.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6BB14 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A8C3D0 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExLockHandleTableEntry @ 0x140348860 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x1403488C0 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140381050 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140515F20 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1406F11F0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1409DA184 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  unsigned __int64 v1; // rbx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  struct _EX_RUNDOWN_REF *Process; // r13
  PEPROCESS v6; // r12
  unsigned __int64 Count; // rbp
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
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v13 = 0;
  if ( ObpIsKernelHandle(v1, PreviousMode) )
  {
    Count = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
  }
  else
  {
    v6 = (PEPROCESS)Process;
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
    v8 = (signed __int64 *)ExpLookupHandleTableEntry(Count, v1);
    v9 = v8;
    if ( v8 )
    {
      if ( ExLockHandleTableEntry(Count, v8) )
      {
        v10 = ObCloseHandleTableEntry(Count, v9, v6, v1, PreviousMode, 0);
        goto LABEL_9;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
    goto LABEL_14;
  ExQueryHandleExceptionsPermanency(Count, &v14, &v13);
  if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v13 )
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
