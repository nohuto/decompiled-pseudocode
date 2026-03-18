/*
 * XREFs of ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801A7EE8
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x180181A78 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 */

void __fastcall CSuperWetInkManager::RegisterSuperWetInkVisual(struct CVisual ***this, struct CVisual *a2)
{
  struct CVisual ***v4; // rcx
  struct CVisual **i; // rax
  struct CVisual **v6; // rdx
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = this + 2;
  for ( i = *v4; i != this[3]; ++i )
  {
    if ( *i == a2 )
      return;
  }
  v6 = this[3];
  if ( v6 == this[4] )
  {
    std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(v4, v6, &v7);
  }
  else
  {
    *v6 = a2;
    ++v4[1];
  }
}
