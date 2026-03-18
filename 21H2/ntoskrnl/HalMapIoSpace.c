/*
 * XREFs of HalMapIoSpace @ 0x1403BE7F0
 * Callers:
 *     HalpHvTimerInitialize @ 0x14039E230 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x1403B3320 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403B4F40 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403BE770 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403DF620 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140522410 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x140522BA0 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x140529428 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x14052CA64 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14052EC78 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405370FC (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140A64868 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140A64A00 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140AFAA68 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
