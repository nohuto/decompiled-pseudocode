/*
 * XREFs of HalMapIoSpace @ 0x1403AC2D0
 * Callers:
 *     HalpHvTimerInitialize @ 0x140390BC0 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x1403A1AE0 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A5790 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403AB43C (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403AC250 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403D0350 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5140 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D5870 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB798 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404DE3C8 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404E01F0 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E740C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409A9950 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409AA5F0 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A650DC (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403BB938 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
