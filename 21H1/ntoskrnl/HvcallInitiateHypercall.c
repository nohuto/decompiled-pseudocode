/*
 * XREFs of HvcallInitiateHypercall @ 0x14038CF90
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14037FCB0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038CC40 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038CF00 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403EC190 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EBDF8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EBF50 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404EC060 (HvlInvokeHypervisorDebugger.c)
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
 *     HvlParkedVirtualProcessors @ 0x1404F24F0 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x1404F2590 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F28C0 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2930 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F2CB8 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F31B8 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F3E80 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4008 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4458 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F4F38 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F52E0 (HvlSwitchVirtualAddressSpace.c)
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
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x140363130 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
