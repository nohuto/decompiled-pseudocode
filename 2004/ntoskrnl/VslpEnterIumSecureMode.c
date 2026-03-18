/*
 * XREFs of VslpEnterIumSecureMode @ 0x1402E56B0
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402E6AA0 (VslGetNestedPageProtectionFlags.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     VslFastFlushSecureRangeList @ 0x14038DC34 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x1403915F0 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140392448 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x140398220 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B5C40 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CB7CC (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CC4EC (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CC620 (VslGetSecurePciEnabled.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F0930 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F0B4C (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F2D04 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F3808 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404F6960 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404F69C0 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404F6B90 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404F6C78 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404F6D04 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404F6DA0 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404F6E28 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404F6F44 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404F7058 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404F712C (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404F72A0 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404F7340 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404F7498 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404F756C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404F75E4 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404F76F4 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404F7770 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404F7980 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404F7A08 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7AA4 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404F7B34 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404F7B9C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404F7C24 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7C80 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404F7D90 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404F7E2C (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404F7FD4 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404F8070 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404F81D0 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404F82FC (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404F83A8 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404F84B0 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404F859C (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404F8648 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404F8710 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404F8770 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404F880C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404F8A70 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404F8B30 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404F8BBC (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404F8CBC (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404F8E90 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404F8F00 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404F8F90 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404F9090 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404F91C0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404F92C0 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404F93B8 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404F9420 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404F94B0 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404F96D0 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404F9750 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404F9860 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x14050D960 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14050DA08 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x14050E698 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x14057ED40 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405AD0B4 (ExRebootSystemForRecovery.c)
 *     DbgkCopyProcessDebugPort @ 0x140618348 (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x14076AF60 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x14076B014 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407B6560 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x140883060 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x14088BA6C (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x14088BB04 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x14088BD20 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088BE60 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14088BFC0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14088C060 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14088C180 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088C248 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088C320 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14088C480 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14088C4E8 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088C594 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14088C614 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088C67C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14088C728 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088C784 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14088C8B8 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14088C944 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14088C9D4 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088CA74 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x14088CB70 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14088CC2C (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14088CC9C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088CD98 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x14088D05C (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x14088D0DC (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x14088D144 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14088D1D8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14088D3DC (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x14088D470 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x14088D500 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x14088D5E0 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x14088D838 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088DAD8 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x14088DBE0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B23F4 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x1409096E8 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x14090ADCC (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090AE38 (PsTerminateVsmEnclave.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A48CF0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A48E4C (MiApplyImportOptimizationToBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A54824 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     PspInitPhase3 @ 0x140A70F94 (PspInitPhase3.c)
 *     VslApplyDynamicRelocations @ 0x140A8C884 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A8C910 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8CA68 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     HvlQueryVsmConnection @ 0x1402E6B08 (HvlQueryVsmConnection.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403F3400 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403F3570 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r15
  bool v5; // bl
  unsigned __int8 CurrentIrql; // r12
  __int16 v8; // dx
  int v9; // ecx
  __int64 v10; // r9
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v13; // r13
  unsigned int SecureThreadCookie; // eax
  BOOL v15; // ecx
  int v16; // r9d
  char v17; // al
  char v18; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned int v20; // ecx
  struct _KTHREAD *v21; // rax
  unsigned int v22; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v24; // rdx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // edx
  char v30; // [rsp+38h] [rbp-39h]
  char PreviousMode; // [rsp+38h] [rbp-39h]
  char v32; // [rsp+39h] [rbp-38h]
  _WORD v35[2]; // [rsp+40h] [rbp-31h] BYREF
  _WORD v36[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v37[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v38[2]; // [rsp+4Ch] [rbp-25h] BYREF
  BOOL v39; // [rsp+50h] [rbp-21h]
  __int64 v40; // [rsp+58h] [rbp-19h]
  _WORD *v41; // [rsp+60h] [rbp-11h] BYREF
  int v42; // [rsp+68h] [rbp-9h]
  int v43; // [rsp+6Ch] [rbp-5h]
  _WORD *v44; // [rsp+70h] [rbp-1h] BYREF
  int v45; // [rsp+78h] [rbp+7h]
  int v46; // [rsp+7Ch] [rbp+Bh]
  _QWORD v47[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = a1;
  v5 = 0;
  v32 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  *(_BYTE *)v10 = v4;
  *(_WORD *)(v10 + 2) = v8;
  v40 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v43 &= v9;
      v35[1] = v8;
      v41 = v35;
      v35[0] = v4;
      v42 = 4;
      v18 = 1;
      EtwTraceKernelEvent((int)&v41, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v18 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v40);
    if ( v18 )
    {
      v46 = 0;
      v36[1] = a2;
      v36[0] = v4;
      v44 = v36;
      v45 = 4;
      EtwTraceKernelEvent((int)&v44, 1, 0xA0000008, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0;
  }
  if ( !KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  SecureThreadCookie = a3;
  if ( (_BYTE)v4 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
    goto LABEL_14;
  }
  if ( a3 )
  {
LABEL_61:
    *(_DWORD *)(a4 + 4) = SecureThreadCookie;
    goto LABEL_13;
  }
  if ( v13 < 2u )
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    if ( !SecureThreadCookie )
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( VslVsmEnabled )
      {
        result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
        if ( result < 0 )
          return result;
        v32 = 1;
      }
      goto LABEL_13;
    }
    a3 = CurrentThread->SecureThreadCookie;
    goto LABEL_61;
  }
  *(_DWORD *)(a4 + 4) = 0;
  a3 = 1;
LABEL_13:
  v5 = CurrentThread->SecureThreadCookie == 0;
LABEL_14:
  if ( v13 == 1 )
  {
    LOBYTE(v39) = 1;
LABEL_18:
    --CurrentThread->KernelApcDisable;
    goto LABEL_19;
  }
  v15 = 0;
  if ( !v13 )
    v15 = v5;
  v39 = v15;
  if ( v15 )
    goto LABEL_18;
  while ( 1 )
  {
LABEL_19:
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v37[1] = a2;
      v30 = 1;
      v47[0] = v37;
      v37[0] = v4;
      v47[1] = 4LL;
      EtwTraceKernelEvent((int)v47, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v30 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v40);
    if ( v30 )
    {
      v38[1] = a2;
      v38[0] = v4;
      v48[0] = v38;
      v48[1] = 4LL;
      EtwTraceKernelEvent((int)v48, 1, 0xA0000008, 1354, 4200706);
    }
    v17 = *(_BYTE *)(a4 + 1);
    if ( v17 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v17 = *(_BYTE *)(a4 + 1);
    }
    if ( v17 == 6 )
      break;
    if ( v17 == 1 )
      goto LABEL_27;
    if ( (_BYTE)v4 == 1 )
    {
      v20 = *(_DWORD *)(a4 + 4);
      v21 = CurrentThread;
      if ( !v20 )
        v21 = CurrentThread;
      v21->SecureThreadCookie = v20;
    }
    else if ( !a3 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_45:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          break;
        }
LABEL_69:
        v22 = *(unsigned __int16 *)(a4 + 2);
        if ( v22 < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v22) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_69;
      case 5:
        goto LABEL_45;
    }
    if ( !a3 && (_BYTE)v4 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = CurrentPrcb->SchedulerAssist;
      v25 = (v24[5] & 0xFFFF0001) == 0;
      v24[5] &= 0xFFFF0001;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_27:
  if ( v32 )
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v16, 0);
  if ( v39 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return *(_DWORD *)(a4 + 8);
}
