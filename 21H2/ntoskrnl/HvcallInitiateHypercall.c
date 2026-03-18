/*
 * XREFs of HvcallInitiateHypercall @ 0x14039DF00
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140398488 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpSlowFlushListTb @ 0x14039D79C (HvlpSlowFlushListTb.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x14039DE70 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1405432A8 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1405433C0 (HvlInvokeHypervisorDebugger.c)
 *     HvlResetCoverageVector @ 0x1405436CC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140543B40 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140543EB0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14054455C (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140544670 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405448D4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1405454FC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1405456C0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140545750 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1405458A0 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x14054599C (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140545C94 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140546200 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140546900 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140546AE0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x140547040 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405471A0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405472A0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1405473F0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1405474E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140547570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140547850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405478E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1405479B0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140547A48 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140547BD0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140547D00 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140547F80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405481F0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140548398 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140548430 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140548560 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140548600 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140548C30 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x140549100 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140549558 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14054961C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405496F8 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140549B18 (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x140549B84 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140549C24 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140549FDC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14054A050 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14054A3D8 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x14054A9B4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14054B670 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054B7FC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14054BC60 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14054C770 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14054CAE0 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14054CE04 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054CEAC (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14054CFC4 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054D374 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140653C40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140653D68 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140653EC4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140654038 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x14065416C (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409311AC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140B4E934 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1403731B0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwTraceTimedEvent @ 0x14045FBE2 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // si
  __int64 v3; // rdi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  char v6; // [rsp+34h] [rbp-44h]
  __int16 v7; // [rsp+35h] [rbp-43h]
  char v8; // [rsp+37h] [rbp-41h]
  _OWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (BYTE4(xmmword_140D06910) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp((unsigned __int64)v9, 0xA0000010uLL);
  }
  else
  {
    v2 = 0;
  }
  v3 = HvcallCodeVa();
  if ( v2 )
  {
    v8 = 0;
    v5 = (unsigned __int16)a1;
    v6 = BYTE2(a1) & 1;
    v7 = a1 < 0;
    EtwTraceTimedEvent(3954, -1610612720, (unsigned int)&v5, 8, 4200962, (__int64)v9);
  }
  return v3;
}
