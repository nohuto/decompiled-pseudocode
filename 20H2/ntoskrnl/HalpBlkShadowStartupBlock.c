/*
 * XREFs of HalpBlkShadowStartupBlock @ 0x140A911FC
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140A91114 (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpBlkAddVirtualMapping @ 0x140A90CEC (HalpBlkAddVirtualMapping.c)
 */

__int64 HalpBlkShadowStartupBlock()
{
  __int64 result; // rax

  result = HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, (__int64)HalpLowStubPhysicalAddress, HalpLowStub, 1, 4);
  if ( (int)result >= 0 )
    return HalpBlkAddVirtualMapping(
             HalpBlkTiledMemoryMapPa,
             (__int64)HalpLowStubPhysicalAddress,
             (unsigned __int64)HalpLowStubPhysicalAddress,
             1,
             64);
  return result;
}
