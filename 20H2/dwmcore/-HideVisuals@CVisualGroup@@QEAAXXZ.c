/*
 * XREFs of ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AB780
 * Callers:
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180155410 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18018AC00 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E11F8 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x180173E0C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801ABCC4 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::HideVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // r9
  CExcludeVisualReference *v3; // rcx
  __int64 v4; // r9
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 7);
  while ( v1 != *((CExcludeVisualReference ***)this + 8) )
  {
    if ( CExcludeVisualReference::GetVisual(*v1) )
    {
      CExcludeVisualReference::Hide(v3);
      v1 = (CExcludeVisualReference **)(v4 + 8);
    }
    else
    {
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 56,
                                           &v5);
    }
  }
}
