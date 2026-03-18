/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1404F0CA0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x1403822B0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F00E0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EFCB8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EFE10 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1404F01EC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404F0740 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F0AC0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404F1064 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404F1368 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404F146C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404F16CC (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F2378 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F253C (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404F25CC (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404F2724 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404F2B50 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F2C50 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F2EF0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F3230 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404F3400 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F3930 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404F3A90 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404F3B90 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404F3CD0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404F3DC0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404F3E50 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F411C (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F41A0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F4260 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F42F4 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F4480 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F45A0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F4760 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F49C0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F4B68 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F4C00 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F4CA0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F4D40 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F5370 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F54C0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F57A0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F5BEC (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F5CA8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F5D7C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F6348 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1404F6450 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F6574 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F6780 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F67F0 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F6B78 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F7078 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F7D40 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F7EC8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F8318 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F8E10 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F94C4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F9568 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404F967C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F97FC (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404F9B90 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C7D1C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C7E50 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C80CC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C8224 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C8378 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408911CC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A92478 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402FE520 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
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
