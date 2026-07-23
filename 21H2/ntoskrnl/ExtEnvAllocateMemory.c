/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404D5330
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404E1750 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404E17E8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E1A14 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404E2AE0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404E4308 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404E4E58 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404E4F08 (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E7C70 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E7E88 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E7F20 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E876C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E8B78 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E8C18 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AB378 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 MemoryInternal; // rax

  MemoryInternal = 0LL;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase == 1 )
      MemoryInternal = HalpMmAllocCtxAlloc(1LL, a2);
  }
  else
  {
    MemoryInternal = HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  return MemoryInternal == 0 ? 0xC000009A : 0;
}
