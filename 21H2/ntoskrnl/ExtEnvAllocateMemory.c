/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404D50F0
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404E1510 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404E15A8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E17D4 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1AE0 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E20C0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404E28A0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404E40C8 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404E4C18 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404E4CC8 (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E740C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E7A30 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E7C48 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E7CE0 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E852C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E8938 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E89D8 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037CA48 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB2B8 (HalpMmAllocateMemoryInternal.c)
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
