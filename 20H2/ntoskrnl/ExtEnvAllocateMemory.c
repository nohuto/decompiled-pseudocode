/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404D3720
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404DFAC0 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404DFB58 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DFD6C (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E0078 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E0660 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404E0DF0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404E25F0 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404E30CC (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404E317C (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E58CC (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E5EF0 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E60B8 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E6150 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E699C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E6DA8 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E6E48 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
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
