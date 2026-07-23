/*
 * XREFs of HvlpHvToNtStatus @ 0x1404FAC74
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403902C0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlRestoreTime @ 0x1403F0C00 (HvlRestoreTime.c)
 *     HvlSetRootFaultReportingReady @ 0x1403F0CA0 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404F3340 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404F4338 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404F43B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F4460 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404F4570 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404F4600 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404F4670 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4770 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4A10 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404F4C20 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F4D50 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F5450 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1404F5970 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F5C3C (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1404F60C0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F6280 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1404F6940 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F69F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F6AE0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6B40 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F6BC0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F6CA0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F6CF0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F6D70 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F6DD0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F6E90 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F7190 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F7240 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F72C0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1404F7370 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F73D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F7490 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1405C977C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C98B0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C9B2C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C9C84 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C9DD8 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x14088EA98 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
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
