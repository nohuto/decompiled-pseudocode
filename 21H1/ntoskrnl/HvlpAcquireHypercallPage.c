/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1404ECDE0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14037FCB0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403EC190 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EBDF8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EBF50 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1404EC32C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404EC880 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ECC00 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404ED1A8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404ED4AC (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404ED5B0 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404ED810 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404EE4CC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404EE690 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404EE720 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404EE878 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404EECB0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EEDB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF050 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF390 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404EF560 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404EFA70 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404EFBD0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404EFCD0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404EFE10 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404EFF00 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404EFF90 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F025C (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F02E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F03A0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F0434 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F05C0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F06E0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F08A0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F0B00 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F0CA8 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F0D40 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F0DE0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F0E80 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F14B0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1600 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F18E0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F1D2C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F1DE8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F1EBC (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F2488 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1404F2590 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F26B4 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F28C0 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2930 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F2CB8 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F31B8 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F3E80 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4008 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4458 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F4F38 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F55E4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F5688 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404F579C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F591C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404F5CB0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C395C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C3A90 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C3D0C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C3E64 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C3FB8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14088A35C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A8D190 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  __int16 v9; // ax
  struct _KPRCB *v10; // rax
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  _DWORD *SchedulerAssist; // r9
  __int16 v21; // ax
  struct _KPRCB *v22; // rax
  __int16 v23; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v13->Next;
    if ( v13 )
    {
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
    }
    else
    {
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        p_Next = (_QWORD *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          p_Next = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        a1->LowPart = 2;
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(a1[1].LowPart) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (v19 + 1)) - 1) & 4;
            }
          }
        }
        Next = MmGetPhysicalAddress(p_Next);
      }
      else
      {
        v21 = v23;
        a1->LowPart = 4;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v21 & 0x200) != 0;
        v22 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          p_Next = v22->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          p_Next = (char *)v22->HypercallCachedPages + 4096;
        }
        Next = (PHYSICAL_ADDRESS)p_Next[2];
      }
    }
    a1[3] = Next;
    return p_Next;
  }
  else
  {
    v9 = v23;
    a1->LowPart = 4;
    _disable();
    a1[1].HighPart = a2;
    LOBYTE(a1[1].LowPart) = (v9 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (_QWORD *)HypercallCachedPages;
    a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  }
  return result;
}
