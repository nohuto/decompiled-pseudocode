/*
 * XREFs of KeInitSystem @ 0x140A4ABFC
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x1403A7258 (KeInitializeCatRegisters.c)
 *     KiDetectTsx @ 0x1403B396C (KiDetectTsx.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B39F0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KdEncodeDataBlock @ 0x1403B40A8 (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x1403B420C (KiInitMachineDependent.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403EB6BC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F0AC0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x140510468 (KeRelaxTimingConstraints.c)
 *     KiEpfDrainCompletionQueue @ 0x1405226C8 (KiEpfDrainCompletionQueue.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KiStartDpcThread @ 0x140795154 (KiStartDpcThread.c)
 *     KeInitializeTimerTable @ 0x140795614 (KeInitializeTimerTable.c)
 *     ExRegisterHost @ 0x1407A8F80 (ExRegisterHost.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     KeFreeInitializationCode @ 0x140A1EB5C (KeFreeInitializationCode.c)
 *     KeInitializeSchedulerAssist @ 0x140A4A9F0 (KeInitializeSchedulerAssist.c)
 *     KiInitializeVelocity @ 0x140A4AFA8 (KiInitializeVelocity.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     KiInitializeReservedCpuSets @ 0x140A4B7FC (KiInitializeReservedCpuSets.c)
 *     KiIntSteerInit @ 0x140A4BC2C (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x140A4BD40 (KiComputeNumaCosts.c)
 *     KiInitDynamicTraceSupport @ 0x140A4BDD0 (KiInitDynamicTraceSupport.c)
 */

char __fastcall KeInitSystem(int a1)
{
  ULONG ActiveProcessorCount; // r15d
  unsigned __int64 v2; // rcx
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // eax
  unsigned __int64 v6; // rax
  ULONG v7; // edi
  __int64 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r10
  __int64 v17; // r10
  int v18; // eax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  _DWORD v33[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h]
  __int64 (__fastcall **v35)(); // [rsp+40h] [rbp-20h]
  __int64 v36; // [rsp+48h] [rbp-18h]
  __int64 v37; // [rsp+50h] [rbp-10h]
  int v38; // [rsp+90h] [rbp+30h] BYREF
  __int64 v39; // [rsp+98h] [rbp+38h] BYREF

  if ( !a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
    {
      v19 = CurrentPrcb->MsrIa32TsxCtrl | 3;
      CurrentPrcb->MsrIa32TsxCtrl = v19;
      __writemsr(0x122u, v19);
    }
    KiTsxSupported = KiDetectTsx();
    KeInitializeSchedulerAssist(v16);
    KeInitializeCatRegisters();
    v18 = KeInitializeTimerTable(v17);
    if ( v18 < 0 )
      KeBugCheckEx(0x31u, v18, 1uLL, 0LL, 0LL);
    if ( KiHrIncrement < (unsigned int)KeMinimumIncrement || KiHrIncrement > KeMaximumIncrement )
      KiHrIncrement = KeMinimumIncrement;
    return 1;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C01A70, 0LL, 0LL);
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
      KiRegisterForDisableFgBoostDecayRegistryNotification();
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      v39 = 0LL;
      v38 = 0;
      if ( (HvlpFlags & 0x100000) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
        KiEpfHashTable = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          v25 = 37LL;
          do
          {
            PoolWithTag[1] = PoolWithTag;
            *PoolWithTag = PoolWithTag;
            PoolWithTag[2] = 0LL;
            *((_DWORD *)PoolWithTag + 6) = 0;
            PoolWithTag += 4;
            --v25;
          }
          while ( v25 );
          LODWORD(KiEpfCompletionDpc) = 275;
          qword_140C2AF38 = (__int64)KiEpfCompletionDpcRoutine;
          qword_140C2AF40 = 0LL;
          qword_140C2AF58 = 0LL;
          qword_140C2AF30 = 0LL;
          if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v39, &v38, v23, v24) >= 0 )
          {
            KiEpfCompletionQueueSize = (unsigned int)(v38 - 16) >> 3;
            KiEpfCompletionQueue = v39;
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
                v28 = KeGetCurrentIrql();
                if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
                {
                  v29 = KeGetCurrentPrcb();
                  v30 = v29->SchedulerAssist;
                  v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v32 = (v31 & v30[5]) == 0;
                  v30[5] &= v31;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick((__int64)v29);
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
  _InterlockedOr(dword_140D24E60, 0x8000u);
  _InterlockedOr(dword_140D2527C, 0x400000u);
  KiInitDynamicTraceSupport();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                        / ActiveProcessorCount;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
    {
      KeDpcWatchdogPeriod = 0;
      v20 = 1;
      KiDPCTimeout = 0;
    }
    else
    {
      v20 = 0;
    }
    KeRelaxTimingConstraints(v20);
  }
  v2 = (unsigned int)KeDpcWatchdogPeriod;
  if ( KeDpcWatchdogPeriod )
  {
    if ( (unsigned int)KeDpcWatchdogPeriod < 0x7D0 )
    {
      v2 = 2000LL;
      KeDpcWatchdogPeriod = 2000;
    }
    if ( (unsigned int)v2 > 0x3A980 )
    {
      v2 = 240000LL;
      KeDpcWatchdogPeriod = 240000;
    }
  }
  v3 = KiDPCTimeout;
  if ( KiDPCTimeout )
  {
    if ( (unsigned int)KiDPCTimeout < 0x14 )
    {
      v3 = 20;
      KiDPCTimeout = 20;
    }
    if ( v3 > 0x4E20 )
    {
      v3 = 20000;
      KiDPCTimeout = 20000;
    }
  }
  if ( ViVerifierEnabled )
  {
    v21 = KeVerifierDpcScalingFactor;
    if ( !KeVerifierDpcScalingFactor )
    {
      v21 = 1;
      KeVerifierDpcScalingFactor = 1;
    }
    if ( v21 > 0x64 )
    {
      v21 = 100;
      KeVerifierDpcScalingFactor = 100;
    }
    v2 = v21 * (unsigned int)v2;
    v3 *= v21;
    KeDpcWatchdogPeriod = v2;
    KiDPCTimeout = v3;
  }
  if ( (_DWORD)v2 )
  {
    if ( v3 )
    {
      if ( v3 < (unsigned int)v2 )
      {
        v4 = KeDpcWatchdogProfileOffset;
        if ( KeDpcWatchdogProfileOffset )
        {
          if ( (unsigned int)KeDpcWatchdogProfileOffset <= 0x3E8 )
          {
            v4 = 1000;
            KeDpcWatchdogProfileOffset = 1000;
          }
          if ( v4 > (unsigned int)v2 )
          {
            v4 = 10000;
            if ( (unsigned int)v2 <= 0x2710 )
              v4 = 1000;
            KeDpcWatchdogProfileOffset = v4;
          }
          v5 = v2 - v4;
          KiDpcWatchdogProfileCumulativeDpcThreshold = v2 - v4;
          if ( (unsigned int)v2 - v4 < 0x3E8 )
          {
            KiDpcWatchdogProfileCumulativeDpcThreshold = 1000;
            v5 = 1000;
          }
          v6 = v3 * v5 / v2;
          if ( v6 > 0xFFFFFFFF )
            LODWORD(v6) = -1;
          KiDpcWatchdogProfileSingleDpcThreshold = v6;
          if ( v3 - (unsigned int)v6 > v4 )
            KiDpcWatchdogProfileSingleDpcThreshold = 0;
          KiDpcWatchdogProfileArrayLength = 3328 * (v4 / 0x3E8);
          dword_140CFB32C = 3328 * (v4 / 0x3E8);
        }
      }
    }
  }
  v7 = 0;
  if ( ActiveProcessorCount )
  {
    v8 = KiProcessorBlock;
    while ( 1 )
    {
      v9 = *v8;
      KiInitializeProcessor(*v8);
      if ( KeThreadDpcEnable )
      {
        if ( (int)KiStartDpcThread(v9) < 0 )
          break;
      }
      ++v7;
      ++v8;
      if ( v7 >= ActiveProcessorCount )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    if ( (unsigned __int8)KiComputeNumaCosts() )
    {
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x640005u);
      KiIntSteerInit();
      if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000005F0] || (_DWORD)KiIptMsrMask )
      {
        v33[1] = 6;
        v35 = off_140008CD8;
        v34 = 512LL;
        v33[0] = 65548;
        v36 = 0LL;
        v37 = 0LL;
        if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, v10, (unsigned __int16 *)v33) < 0 )
          KiSupervisorStateExtensionHost = 0LL;
      }
      if ( KiInitMachineDependent() )
      {
        v11 = *(unsigned int *)(KiProcessorBlock[0] + 68);
        v12 = v11 * (unsigned __int64)KeMaximumIncrement / 0xA;
        KiShortExecutionCycles = v12 / 0xF0;
        KiCyclesPerClockQuantum = v12 / 3;
        KiDirectQuantumTarget = v12 / 3;
        KiLockQuantumTarget = 3 * (v12 / 3);
        _BitScanReverse64(&v12, 6000000 * v11);
        KiFavoredCoreCycleTimeBits = v12;
        KdEncodeDataBlock();
        v13 = KeExpandKernelStackAndCalloutInternal(
                (void (__fastcall *)(ULONG_PTR))KiVerifyScopesExecute,
                0LL,
                49152,
                2,
                0LL);
        if ( v13 < 0 )
          KeBugCheckEx(0x32u, v13, 0x5356694BuLL, 0LL, 0LL);
        return 1;
      }
    }
  }
  return 0;
}
