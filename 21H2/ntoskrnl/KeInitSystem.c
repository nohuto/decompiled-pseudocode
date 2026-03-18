/*
 * XREFs of KeInitSystem @ 0x140B03800
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeInitializeCatRegisters @ 0x1403B6CE8 (KeInitializeCatRegisters.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     KiStartDpcDelegateThread @ 0x1403C13E4 (KiStartDpcDelegateThread.c)
 *     KiInitMachineDependent @ 0x1403CB7F4 (KiInitMachineDependent.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1403DCE64 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1403DDE4C (KiInitializeIdealProcessorRebalancer.c)
 *     KiDetectTsx @ 0x1403DE2DC (KiDetectTsx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB1CC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140543EB0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x140568560 (KeRelaxTimingConstraints.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x140568CA4 (KiApplyDpcVerificationScaleSettings.c)
 *     KiEpfDrainCompletionQueue @ 0x14057B0EC (KiEpfDrainCompletionQueue.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KiStartDpcThread @ 0x140829870 (KiStartDpcThread.c)
 *     KeInitializeTimerTable @ 0x14082A0D8 (KeInitializeTimerTable.c)
 *     ExRegisterHost @ 0x1408486C4 (ExRegisterHost.c)
 *     KiInitializeProcessor @ 0x140A5943C (KiInitializeProcessor.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     KeFreeInitializationCode @ 0x140AD6B50 (KeFreeInitializationCode.c)
 *     KiIntSteerInit @ 0x140B036D4 (KiIntSteerInit.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B24034 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     KiComputeDispatchInterruptCost @ 0x140B24E48 (KiComputeDispatchInterruptCost.c)
 *     KiInitializeVelocity @ 0x140B29BDC (KiInitializeVelocity.c)
 *     KiInitDpcThresholds @ 0x140B2CB08 (KiInitDpcThresholds.c)
 *     KiInitializeReservedCpuSets @ 0x140B2EDD8 (KiInitializeReservedCpuSets.c)
 *     KiInitDynamicTraceSupport @ 0x140B30F84 (KiInitDynamicTraceSupport.c)
 *     KeInitializeSchedulerAssist @ 0x140B311E0 (KeInitializeSchedulerAssist.c)
 *     KiComputeNumaCosts @ 0x140B31500 (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v2; // rcx
  ULONG v3; // r14d
  __int64 v4; // rdx
  ULONG v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  struct _KPRCB *v20; // r10
  __int64 v21; // r10
  __int64 v22; // r10
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // r9
  __int64 *v30; // rdx
  int v31; // r8d
  _QWORD *PoolWithTag; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v40; // r8
  int v41; // eax
  bool v42; // zf
  _DWORD v43[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v44; // [rsp+38h] [rbp-28h]
  __int64 (__fastcall **v45)(); // [rsp+40h] [rbp-20h]
  __int64 v46; // [rsp+48h] [rbp-18h]
  __int64 v47; // [rsp+50h] [rbp-10h]
  int v48; // [rsp+90h] [rbp+30h] BYREF
  __int64 v49; // [rsp+98h] [rbp+38h] BYREF

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (char *)&dword_140C02FD0,
          (__int64)KiTraceLogControlCallback,
          (__int64)&dword_140C02FD0);
        KiIntSteerInit(2LL, v24, v25);
      }
      else if ( a1 == 3 )
      {
        KiInitializeReservedCpuSets();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
        MmFreeLoaderBlock();
        KeLoaderBlock_0 = 0LL;
        ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
        KiInitializeVelocity();
        KiInitializeNormalPriorityAntiStarvationPolicies();
        if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
          KeEnableWatchdogTimeout = 1;
        v49 = 0LL;
        v48 = 0;
        if ( (HvlpFlags & 0x100000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
          KiEpfHashTable = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            v35 = 37LL;
            do
            {
              PoolWithTag[1] = PoolWithTag;
              *PoolWithTag = PoolWithTag;
              PoolWithTag[2] = 0LL;
              *((_DWORD *)PoolWithTag + 6) = 0;
              PoolWithTag += 4;
              --v35;
            }
            while ( v35 );
            LODWORD(KiEpfCompletionDpc) = 275;
            qword_140C2A858 = (__int64)KiEpfCompletionDpcRoutine;
            qword_140C2A860 = 0LL;
            qword_140C2A878 = 0LL;
            qword_140C2A850 = 0LL;
            if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v49, &v48, v33, v34) >= 0 )
            {
              KiEpfCompletionQueueSize = (unsigned int)(v48 - 16) >> 3;
              KiEpfCompletionQueue = v49;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
              }
              KiEpfDrainCompletionQueue();
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v38 = KeGetCurrentIrql();
                  if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v40 = CurrentPrcb->SchedulerAssist;
                    v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v42 = (v41 & v40[5]) == 0;
                    v40[5] &= v41;
                    if ( v42 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(CurrentIrql);
            }
          }
        }
        KeFreeInitializationCode();
      }
      return 1;
    }
    KiInitDynamicTraceSupport();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v2 = (unsigned int)KeMaximumIncrement;
    v3 = ActiveProcessorCount;
    KiDpcWatchdogConfigurationLock = 0LL;
    v4 = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement - 1)
       % ActiveProcessorCount;
    KiClockKeepAliveCycle = (ActiveProcessorCount
                           + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement
                           - 1)
                          / ActiveProcessorCount;
    if ( !KiForceBugcheckForDpcWatchdog && HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        KeDpcWatchdogPeriodMs = 0;
        v27 = 1;
        KeDpcTimeoutMs = 0;
        KeDpcSoftTimeoutMs = 0;
        KeDpcCumulativeSoftTimeoutMs = 0;
        KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
        KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      }
      else
      {
        v27 = 0;
      }
      KeRelaxTimingConstraints(v27);
    }
    KiInitDpcThresholds(v2, v4);
    if ( ViVerifierEnabled )
    {
      v28 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v28 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v28 > 0x64 )
        KeVerifierDpcScalingFactor = 100;
      KiApplyDpcVerificationScaleSettings();
    }
    v5 = 0;
    if ( v3 )
    {
      v6 = KiProcessorBlock;
      while ( 1 )
      {
        v7 = *v6;
        KiInitializeProcessor(*v6);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v7) < 0 )
            break;
        }
        if ( (int)KiStartDpcDelegateThread(v7, v8, v9, v10) < 0 )
          break;
        ++v5;
        ++v6;
        if ( v5 >= v3 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      if ( (unsigned __int8)KiComputeNumaCosts()
        && (int)KiComputeDispatchInterruptCost() >= 0
        && (int)KiInitializeDpcRuntimeHistoryHashTables() >= 0 )
      {
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140D07058 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x640010u);
        KiIntSteerInit(1LL, v11, v12);
        if ( (KeFeatureBits & 0x800000) != 0 && KeEnabledSupervisorXStateFeatures || (_DWORD)KiIptMsrMask )
        {
          v43[1] = 6;
          v45 = off_140009C98;
          v44 = 512LL;
          v43[0] = 65548;
          v46 = 0LL;
          v47 = 0LL;
          if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, v13, (unsigned __int16 *)v43) < 0 )
            KiSupervisorStateExtensionHost = 0LL;
        }
        if ( KiInitMachineDependent() )
        {
          v14 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          v15 = v14 * (unsigned __int64)(unsigned int)KeMaximumIncrement / 0xA;
          KiShortExecutionCycles = v15 / 0xF0;
          KiCyclesPerClockQuantum = v15 / 3;
          KiDirectQuantumTarget = v15 / 3;
          v16 = KiLongDpcRuntimeThreshold;
          *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = 3 * KiCyclesPerClockQuantum;
          _BitScanReverse64(&v15, 6000000 * v14);
          KiFavoredCoreCycleTimeBits = v15;
          if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
          {
            v16 = 50;
            KiLongDpcRuntimeThreshold = 50;
          }
          if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
            KiLongDpcQueueThreshold = 2;
          v17 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          KiLongDpcRuntimeThresholdCycles = v16 * *(_DWORD *)(KiProcessorBlock[0] + 68);
          qword_140D05358 = v17 * HIDWORD(KiHgsPlusConfiguration);
          qword_140D05368 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140D05360;
          if ( KdpBootedNodebug )
          {
            v29 = KiWaitNever;
            v30 = (__int64 *)&KdDebuggerDataBlock;
            KdpDataBlockEncoded = 1;
            v31 = 112;
            do
            {
              *v30 = v29 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v30), v29);
              ++v30;
              --v31;
            }
            while ( v31 );
          }
          v18 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))KiVerifyScopesExecute,
                  0LL,
                  49152,
                  2,
                  0LL);
          if ( v18 < 0 )
            KeBugCheckEx(0x32u, v18, 0x5356694BuLL, 0LL, 0LL);
          KiInitializeIdealProcessorRebalancer();
          LODWORD(KiPristineTriageDumpSize) = 268288;
          KiPristineTriageDumpAllocationDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiPristineTriageDumpAllocationWorker;
          KiPristineTriageDumpAllocationDpc.TargetInfoAsUlong = 275;
          KiPristineTriageDumpAllocationDpc.DeferredContext = 0LL;
          KiPristineTriageDumpAllocationDpc.DpcData = 0LL;
          KiPristineTriageDumpAllocationDpc.ProcessorHistory = 0LL;
          return 1;
        }
      }
    }
    return 0;
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (v20->MsrIa32TsxCtrl & 3) != 3 )
    {
      v26 = v20->MsrIa32TsxCtrl | 3;
      v20->MsrIa32TsxCtrl = v26;
      __writemsr(0x122u, v26);
    }
    KiTsxSupported = KiDetectTsx();
    KeInitializeSchedulerAssist(v21);
    KeInitializeCatRegisters();
    v23 = KeInitializeTimerTable(v22);
    if ( v23 < 0 )
      KeBugCheckEx(0x31u, v23, 1uLL, 0LL, 0LL);
    return 1;
  }
}
