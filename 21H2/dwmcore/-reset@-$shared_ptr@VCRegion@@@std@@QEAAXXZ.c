/*
 * XREFs of ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801132D6
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800BCA94 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801DEDAC (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801DF714 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CRegion>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
