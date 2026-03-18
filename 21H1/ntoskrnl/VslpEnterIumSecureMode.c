/*
 * XREFs of VslpEnterIumSecureMode @ 0x14032A7E0
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x140357C10 (KeRequestTerminationThread.c)
 *     VslFastFlushSecureRangeList @ 0x14038D0C4 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x140390A80 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140391898 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x1403975F0 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CA9EC (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CB72C (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CB830 (VslGetSecurePciEnabled.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F02E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F04FC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F26B4 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F31B8 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404F6310 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404F6370 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404F6540 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404F6628 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404F66B4 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404F6750 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404F67D8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404F68F4 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404F6A08 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404F6ADC (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404F6C50 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404F6CF0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404F6E48 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404F6F1C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404F6F94 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404F70A4 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404F7120 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404F7330 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404F73B8 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7454 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404F74E4 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404F754C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404F75D4 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7630 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404F7740 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404F77DC (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404F7984 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404F7A20 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404F7B80 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404F7CAC (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404F7D58 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404F7E60 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404F7F4C (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404F7FF8 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404F80C0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404F8120 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404F81BC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404F8420 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404F84E0 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404F856C (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404F866C (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404F8840 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404F88B0 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404F8940 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404F8A40 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404F8B70 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404F8C70 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404F8D68 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404F8DD0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404F8E60 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404F9080 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404F9100 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404F9210 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x14050D310 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x14050E048 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x140539BD8 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x14057E700 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405AC988 (ExRebootSystemForRecovery.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x14066FA68 (DbgkCopyProcessDebugPort.c)
 *     MiMarkKernelImageCfgBits @ 0x14075E734 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x140768B80 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x140768C34 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407B33F0 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x140881D40 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x14088A74C (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x14088A7E4 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x14088AA00 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088AB40 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14088ACA0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14088AD40 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14088AE60 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088AF28 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088B000 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14088B160 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14088B1C8 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088B274 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14088B2F4 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088B35C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14088B408 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088B464 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14088B598 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14088B624 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14088B6B4 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088B754 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x14088B850 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14088B90C (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14088B97C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088BA78 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x14088BD3C (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x14088BDBC (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x14088BE24 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14088BEB8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14088C0BC (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x14088C150 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x14088C1E0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x14088C2C0 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x14088C518 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088C7B8 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x14088C8C0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B10D4 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x140908438 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x140909B1C (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x140909B88 (PsTerminateVsmEnclave.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A43490 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A435EC (MiApplyImportOptimizationToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A4EB24 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 *     PspInitPhase3 @ 0x140A70188 (PspInitPhase3.c)
 *     VslApplyDynamicRelocations @ 0x140A8D29C (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A8D328 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8D480 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403F2170 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403F22E0 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
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
  __int64 v16; // rdx
  __int64 v17; // r9
  char v18; // al
  char v19; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // rax
  unsigned int v23; // eax
  struct _KPRCB *CurrentPrcb; // rcx
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
      v19 = 1;
      EtwTraceKernelEvent((__int64)&v41, 1u, 0xA0000008, 0x549u, 0x401902u);
    }
    else
    {
      v19 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v40);
    if ( v19 )
    {
      v46 = 0;
      v36[1] = a2;
      v36[0] = v4;
      v44 = v36;
      v45 = 4;
      EtwTraceKernelEvent((__int64)&v44, 1u, 0xA0000008, 0x54Au, 0x401902u);
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
      EtwTraceKernelEvent((__int64)v47, 1u, 0xA0000008, 0x549u, 0x401902u);
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
      EtwTraceKernelEvent((__int64)v48, 1u, 0xA0000008, 0x54Au, 0x401902u);
    }
    v18 = *(_BYTE *)(a4 + 1);
    if ( v18 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v18 = *(_BYTE *)(a4 + 1);
    }
    if ( v18 == 6 )
      break;
    if ( v18 == 1 )
      goto LABEL_27;
    if ( (_BYTE)v4 == 1 )
    {
      v21 = *(_DWORD *)(a4 + 4);
      v22 = CurrentThread;
      if ( !v21 )
        v22 = CurrentThread;
      v22->SecureThreadCookie = v21;
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
        v23 = *(unsigned __int16 *)(a4 + 2);
        if ( v23 < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v23) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v23) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v23) & 0xF);
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
      v16 = (__int64)CurrentPrcb->SchedulerAssist;
      v25 = (*(_DWORD *)(v16 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v16 + 20) &= 0xFFFF0001;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_27:
  if ( v32 )
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v17, 0);
  if ( v39 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, 0LL, v17);
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
