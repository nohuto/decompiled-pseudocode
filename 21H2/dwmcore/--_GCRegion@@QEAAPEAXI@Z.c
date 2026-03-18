/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x1800132A0
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18000B76C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ @ 0x180014E80 (-_Destroy@-$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18001E704 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180084B28 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180279984 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18027B90C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802ABB00 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CRegion *__fastcall CRegion::`scalar deleting destructor'(CRegion *this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
