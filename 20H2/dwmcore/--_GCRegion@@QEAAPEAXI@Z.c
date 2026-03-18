/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x180038124
 * Callers:
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x180038010 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18006E07C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800724A4 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ @ 0x18017CDE0 (-_Destroy@-$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180236474 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x1802376BC (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180266940 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

CRegion *__fastcall CRegion::`scalar deleting destructor'(CRegion *this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
