/*
 * XREFs of HalMapIoSpace @ 0x1403B2320
 * Callers:
 *     HalpHvTimerInitialize @ 0x1403906F0 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x1403A1220 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A4ED0 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403B148C (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403B22A0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403CF9E0 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D3770 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D3EA0 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D9D88 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404DC9B8 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404DE7E0 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E58CC (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409ACA80 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409AD700 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A63ABC (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403BAF38 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
