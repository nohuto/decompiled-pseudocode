/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1404F33B0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140382AA4 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F0D20 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404F17D8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404F1930 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1404F1D0C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404F2260 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F25E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404F2B84 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404F2E88 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404F2F8C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404F31EC (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F3E98 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F405C (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404F40EC (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404F4244 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404F4670 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4770 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4A10 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F4D50 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404F4F20 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F5450 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404F55B0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404F56B0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404F57F0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404F58E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404F5970 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F5C3C (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F5CC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F5D80 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F5E14 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F5FA0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F60C0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F6280 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F64E0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F6688 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F6720 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F67C0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F6860 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F6E90 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F6FE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F72C0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F770C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F77C8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F789C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F7E68 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1404F7F70 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F8094 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F82A0 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F8310 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F8698 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F8B98 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F9860 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F99E8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F9E38 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA344 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404FA930 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404FAFE4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404FB088 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404FB19C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404FB31C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404FB6B0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C977C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C98B0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C9B2C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C9C84 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C9DD8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14088E8CC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A902D8 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v3; // rdx
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KPRCB *v8; // rax
  int v9; // r8d

  LODWORD(v1) = *(_DWORD *)a1;
  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v3 = *(_SLIST_ENTRY **)(a1 + 16);
    v3[1].Next = *(_SLIST_ENTRY **)(a1 + 24);
    LOBYTE(v1) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8) + 33600LL), v3);
  }
  else if ( (v1 & 2) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 8);
    if ( (unsigned __int8)v4 < 2u )
    {
      LOBYTE(v1) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v1) = KeGetCurrentIrql() - 2;
          if ( (unsigned __int8)v1 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(v1) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v7 = ((unsigned int)v1 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v1;
            if ( v7 )
              LOBYTE(v1) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
  }
  else
  {
    v8 = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages + 4096;
    }
    v1 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(HypercallCachedPages + 16) = v1;
    if ( *(_BYTE *)(a1 + 8) )
      _enable();
  }
  return v1;
}
