/*
 * XREFs of HalMapIoSpace @ 0x1403AFD30
 * Callers:
 *     HalpHvTimerInitialize @ 0x14038E200 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x14039ED50 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A2B10 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403AEE9C (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403AFCB0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403CCD50 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D01D0 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D0900 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D67F8 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404D9428 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404DB250 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E233C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409A6B10 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409A7790 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A5C75C (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403B8498 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
