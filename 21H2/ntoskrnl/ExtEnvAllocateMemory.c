/*
 * XREFs of ExtEnvAllocateMemory @ 0x1403CE24C
 * Callers:
 *     HalpDmaAlwaysReserveLogicalAddressRange @ 0x1403CE1A4 (HalpDmaAlwaysReserveLogicalAddressRange.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052DC38 (IvtAllocateScalableModePasidTables.c)
 *     HalpHsaAllocateReservedDomainList @ 0x1405302D4 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x140530348 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x140530540 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405307FC (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x140530DE0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x140531560 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140532D90 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x14053385C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1405338FC (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405370FC (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x140537770 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140537928 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x14053799C (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1405381DC (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x140538278 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x140538748 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1405387E8 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140A64868 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *MemoryInternal; // rax

  v3 = 0;
  v4 = a2;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, a2);
  }
  else
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  memset(MemoryInternal, 0, v4);
  return v3;
}
