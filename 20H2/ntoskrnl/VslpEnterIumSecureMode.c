/*
 * XREFs of VslpEnterIumSecureMode @ 0x1402E51E8
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1402EC780 (KeRequestTerminationThread.c)
 *     VslFastFlushSecureRangeList @ 0x140390124 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x140393AB0 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140394908 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x14039A6E0 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B86E0 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CE3EC (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CF188 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CF2C0 (VslGetSecurePciEnabled.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F41A0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F43BC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F6574 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F7078 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404FA1F0 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404FA250 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404FA420 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404FA508 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404FA594 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404FA630 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FA6B8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FA7D4 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404FA8E8 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404FA9BC (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404FAB30 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FABD0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FAD28 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404FADFC (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404FAE74 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404FAF84 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404FB000 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404FB210 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404FB298 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404FB334 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404FB3C4 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404FB42C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404FB4B4 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FB510 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404FB620 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404FB6BC (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FB864 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404FB900 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404FBA60 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404FBB8C (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404FBC38 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404FBD40 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404FBE2C (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404FBED8 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404FBFA0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404FC000 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FC09C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404FC300 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404FC3C0 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404FC44C (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404FC54C (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404FC720 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404FC790 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404FC820 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FC920 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404FCA50 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404FCB50 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404FCC48 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404FCCB0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FCD40 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404FCF60 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FCFE0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404FD0F0 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x140511290 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x140511338 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x140511FC8 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x140582770 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405B0C14 (ExRebootSystemForRecovery.c)
 *     DbgkCopyProcessDebugPort @ 0x140630564 (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x14076F114 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x140779570 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x140779624 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407C4D90 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x140888BB0 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x1408915BC (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x140891654 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x140891870 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1408919B0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140891B10 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140891BB0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140891CD0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140891D98 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140891E70 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140891FD0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140892038 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x1408920E4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x140892164 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1408921CC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140892278 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x1408922D4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140892408 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x140892494 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x140892524 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1408925C4 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x1408926C0 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14089277C (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x1408927EC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x1408928E8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x140892BAC (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x140892C2C (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140892C94 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140892D28 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140892F2C (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x140892FC0 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140893050 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140893130 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x140893388 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140893628 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x140893730 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B8014 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x14090F308 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x140910A08 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x140910A74 (PsTerminateVsmEnclave.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4E0B0 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A4EF80 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A4F0DC (MiApplyImportOptimizationToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A54EA4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 *     PspInitPhase3 @ 0x140A77164 (PspInitPhase3.c)
 *     VslApplyDynamicRelocations @ 0x140A92584 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A92610 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A92768 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x1402E7528 (HvlQueryVsmConnection.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403F7FB0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403F8120 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
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
  __int64 v16; // r9
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
      EtwTraceKernelEvent((unsigned int)&v41, 1, -1610612728, 1353, 4200706);
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
      EtwTraceKernelEvent((unsigned int)&v44, 1, -1610612728, 1354, 4200706);
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
      EtwTraceKernelEvent((unsigned int)v47, 1, -1610612728, 1353, 4200706);
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
      EtwTraceKernelEvent((unsigned int)v48, 1, -1610612728, 1354, 4200706);
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
    KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0, 1, v16, 0);
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
