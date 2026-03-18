/*
 * XREFs of ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x1800B851C
 * Callers:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801AF69C (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x1800B9180 (-_Reallocate_exactly@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

unsigned __int64 __fastcall std::vector<tagRECT>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 4;
  if ( a2 > result )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<KernelTap>::_Xlength();
    return std::vector<tagRECT>::_Reallocate_exactly();
  }
  return result;
}
