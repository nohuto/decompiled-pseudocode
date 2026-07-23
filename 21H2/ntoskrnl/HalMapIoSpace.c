/*
 * XREFs of HalMapIoSpace @ 0x1403AD060
 * Callers:
 *     HalpHvTimerInitialize @ 0x140390D10 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x1403A1C30 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A58E0 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403AC1CC (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403ACFE0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403D04C0 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D5AB0 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB9D8 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404DE608 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404E0430 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AB378 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409AB520 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A660DC (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
