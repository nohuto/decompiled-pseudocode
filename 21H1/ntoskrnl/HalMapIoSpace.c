/*
 * XREFs of HalMapIoSpace @ 0x1403A8C70
 * Callers:
 *     HalpHvTimerInitialize @ 0x14038D690 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x14039E5C0 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A2380 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403A7DDC (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403A8BF0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403CBF10 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404CFD20 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D0450 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D62E8 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404D8F18 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404DAD40 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E1D7C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A67A8 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409A6950 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A5D6BC (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403B7668 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
