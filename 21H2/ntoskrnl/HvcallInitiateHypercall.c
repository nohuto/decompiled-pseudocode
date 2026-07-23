/*
 * XREFs of HvcallInitiateHypercall @ 0x140390610
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140382AA4 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403902C0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x140390580 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F0D20 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404F17D8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404F1930 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404F1A40 (HvlInvokeHypervisorDebugger.c)
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
 *     HvlParkedVirtualProcessors @ 0x1404F7ED0 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x1404F7F70 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F82A0 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F8310 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F8698 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F8B98 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F9860 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F99E8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F9E38 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA344 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404FA930 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
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
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x140365F30 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v6, 8, 4200962, (__int64)v10);
    return v5;
  }
  return result;
}
