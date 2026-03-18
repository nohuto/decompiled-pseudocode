/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404D0180
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404DC530 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404DC5C8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DC7DC (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404DCAE8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DD0D0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404DD860 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404DF060 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404DFB3C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404DFBEC (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E233C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E2960 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E2B28 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E2BC0 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E340C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E3818 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E38B8 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
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
