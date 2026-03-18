/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x1802365D8
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1802364B8 (--$_Emplace_reallocate@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@-$vector.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180236474 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 */

CRegion **__fastcall std::_Uninitialized_move<std::unique_ptr<CRegion> *,std::unique_ptr<CRegion> *,std::allocator<std::unique_ptr<CRegion>>>(
        CRegion **a1,
        CRegion **a2,
        CRegion **a3)
{
  CRegion *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(a3, a3);
  return a3;
}
