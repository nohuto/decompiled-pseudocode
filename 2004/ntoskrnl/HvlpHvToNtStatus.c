/*
 * XREFs of HvlpHvToNtStatus @ 0x1404F58C4
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038D7B0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSetRootFaultReportingReady @ 0x1403ED110 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404EDFB4 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404EEFBC (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404EF040 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404EF0F0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404EF200 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404EF290 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404EF300 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EF400 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF6A0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404EF8B0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF9E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F00C0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1404F05E0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F08AC (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1404F0D30 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F0EF0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1404F15B0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F1660 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F1750 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F17B0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F1830 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F1910 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F1960 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F19E0 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F1A40 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F1B00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F1E00 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F1EB0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F1F30 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1404F1FE0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F2048 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F2100 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1405C408C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C41C0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C443C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C4594 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C46E8 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x14088B848 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
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
