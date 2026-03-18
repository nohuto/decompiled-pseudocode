/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404CFCD0
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404DC020 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404DC0B8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404DC2CC (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404DC5D8 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DCB30 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404DD2A0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404DEAA0 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404DF57C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404DF62C (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E1D7C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E23B0 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E2578 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E2610 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E2E5C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E3268 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E3308 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A67A8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
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
