/*
 * XREFs of ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801FF4C0
 * Callers:
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x180111C04 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801C8380 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801FF5D4 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::RestoreVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // rbx
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  while ( v1 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v1) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      ++v1;
    }
    else
    {
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 64,
                                           &v4);
    }
  }
}
