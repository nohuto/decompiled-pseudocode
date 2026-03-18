/*
 * XREFs of HvcallInitiateHypercall @ 0x14038DB00
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x1403804F0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038D7B0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038DA70 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403ED190 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EC428 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EC580 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404EC690 (HvlInvokeHypervisorDebugger.c)
 *     HvlResetCoverageVector @ 0x1404EC97C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404ECED0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ED250 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404ED7F8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404EDAFC (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404EDC00 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404EDE60 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404EEB1C (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404EECE0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404EED70 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404EEEC8 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404EF300 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EF400 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF6A0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF9E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404EFBB0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F00C0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404F0220 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404F0320 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404F0460 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404F0550 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404F05E0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F08AC (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F0930 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F09F0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F0A84 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F0C10 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F0D30 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F0EF0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F1150 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F12F8 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F1390 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F1430 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F14D0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F1B00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1C50 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F1F30 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F237C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F2438 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F250C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F2AD8 (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x1404F2B40 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x1404F2BE0 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F2F10 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2F80 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F3308 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F3808 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F44D0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4658 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4AA8 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4FB4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F5588 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F5930 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F5C34 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F5CD8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404F5DEC (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F5F6C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404F6300 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C408C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C41C0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C443C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C4594 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C46E8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14088B67C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A8C778 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14033BE50 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x140363AF0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
