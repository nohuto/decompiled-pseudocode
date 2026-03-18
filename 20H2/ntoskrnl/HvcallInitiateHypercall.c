/*
 * XREFs of HvcallInitiateHypercall @ 0x14038FFF0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x1403822B0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038FCA0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038FF60 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F00E0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EFCB8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EFE10 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404EFF20 (HvlInvokeHypervisorDebugger.c)
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
 *     HvlParkedVirtualProcessors @ 0x1404F63B0 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x1404F6450 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F6780 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F67F0 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F6B78 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F7078 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F7D40 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F7EC8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F8318 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F8E10 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F91C0 (HvlSwitchVirtualAddressSpace.c)
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
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030EAD8 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x140365AD0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // di
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  char v7; // [rsp+34h] [rbp-54h]
  __int16 v8; // [rsp+35h] [rbp-53h]
  char v9; // [rsp+37h] [rbp-51h]
  _OWORD v10[2]; // [rsp+38h] [rbp-50h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( (BYTE4(xmmword_140CFC490) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v10, 0xA0000010);
  }
  else
  {
    v2 = 0;
  }
  v3 = a1;
  result = HvcallCodeVa();
  v5 = result;
  if ( v2 )
  {
    v9 = 0;
    v6 = (unsigned __int16)v3;
    v7 = BYTE2(v3) & 1;
    v8 = v3 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v6, 8, 0x401A02u, (__int64)v10);
    return v5;
  }
  return result;
}
