/*
 * XREFs of HvlpHvToNtStatus @ 0x1404F9154
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038FCA0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlRestoreTime @ 0x1403EFFC0 (HvlRestoreTime.c)
 *     HvlSetRootFaultReportingReady @ 0x1403F0060 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404F1820 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404F2818 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404F2890 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F2940 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404F2A50 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404F2AE0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404F2B50 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F2C50 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F2EF0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404F3100 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F3230 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F3930 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1404F3E50 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F411C (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1404F45A0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F4760 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1404F4E20 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F4ED0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F4FC0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F5020 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F50A0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F5180 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F51D0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F5250 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F52B0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F5370 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F5670 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F5720 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F57A0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1404F5850 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F58B8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F5970 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1405C7D1C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C7E50 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C80CC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C8224 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C8378 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x140891398 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
