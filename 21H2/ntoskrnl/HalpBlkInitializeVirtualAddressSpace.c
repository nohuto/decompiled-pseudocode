/*
 * XREFs of HalpBlkInitializeVirtualAddressSpace @ 0x140A8EF74
 * Callers:
 *     HalpBlkInitSystem @ 0x140A3A550 (HalpBlkInitSystem.c)
 * Callees:
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A8ED80 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkAllocateShadowCode @ 0x140A8EE08 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkAllocateShadowData @ 0x140A8EEE0 (HalpBlkAllocateShadowData.c)
 *     HalpBlkShadowApic @ 0x140A8F008 (HalpBlkShadowApic.c)
 *     HalpBlkShadowStartupBlock @ 0x140A8F05C (HalpBlkShadowStartupBlock.c)
 */

__int64 HalpBlkInitializeVirtualAddressSpace()
{
  __int64 PageTablePage; // rbx
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  PageTablePage = HalpBlkAllocatePageTablePage(1);
  if ( !PageTablePage )
    return 3221225495LL;
  v2 = HalpBlkAllocatePageTablePage(1);
  LOBYTE(v3) = 1;
  v4 = v2;
  v5 = HalpMap(PageTablePage, 1LL, 1u, v3, 4u);
  if ( !v5 )
    return 3221225495LL;
  HalpBlkRootPageTablePa = PageTablePage;
  HalpBlkTiledMemoryMapPa = v4;
  HalpBlkPageTableVaWindow = v5;
  result = HalpBlkAllocateShadowCode();
  if ( (int)result >= 0 )
  {
    result = HalpBlkAllocateShadowData();
    if ( (int)result >= 0 )
    {
      result = HalpBlkShadowApic();
      if ( (int)result >= 0 )
        return HalpBlkShadowStartupBlock();
    }
  }
  return result;
}
