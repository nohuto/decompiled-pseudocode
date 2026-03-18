/*
 * XREFs of NtClose @ 0x1405F78C0
 * Callers:
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3500 (_RtlpRemovePendingDeleteLanguages.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1403B35C0 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3620 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405890C0 (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     PfSnPopulateReadList @ 0x1406049E0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140604F18 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x14060B8A4 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14060B900 (PfpFileBuildReadSupport.c)
 *     AlpcpConnectPort @ 0x14062A204 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     PfSnPrefetchMetadata @ 0x1406BCE74 (PfSnPrefetchMetadata.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1406BDC88 (PfSnIsVolumeMounted.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CD1D8 (PfSnGetPrefetchInstructions.c)
 *     PfpPrefetchPrivatePages @ 0x1406D0954 (PfpPrefetchPrivatePages.c)
 *     PfpVolumeOpenAndVerify @ 0x1406D111C (PfpVolumeOpenAndVerify.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406D2590 (PfpSourceGetPrefetchSupport.c)
 *     AlpcpCreateConnectionPort @ 0x1406FA218 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x14070BE70 (NtCreateRegistryTransaction.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14071FA00 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpInitializeLazyWriters @ 0x1407829F8 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x14078A570 (RtlpLoadLanguageConfigList.c)
 *     AdtpObjsInitialize @ 0x1407AAC70 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407AB168 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B8EC8 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x140864F40 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x14088E3A0 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140912B98 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409443AC (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x140948A40 (ExpWatchLicenseInfoWork.c)
 *     sub_140A34A14 @ 0x140A34A14 (sub_140A34A14.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A62D10 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A63F4C (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140A68364 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A6AADC (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6BE48 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A6F4C4 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A89860 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A8D360 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x14020B240 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x14020B270 (ExLockHandleTableEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037EAE0 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140510AB0 (KeRaiseUserException.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  unsigned __int64 v1; // rbx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  _KPROCESS *Process; // r13
  PEPROCESS v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  volatile signed __int64 *v9; // rsi
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
    v7 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    if ( !v7 )
      return -1073741816;
    v4 = 1;
  }
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) != 0 )
  {
    v8 = ExpLookupHandleTableEntry((unsigned int *)v7, v1);
    v9 = (volatile signed __int64 *)v8;
    if ( v8 )
    {
      if ( ExLockHandleTableEntry(v7, (signed __int64 *)v8) )
      {
        v10 = ObCloseHandleTableEntry(v7, v9, (ULONG_PTR)v6, v1, PreviousMode, 0);
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
