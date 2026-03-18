/*
 * XREFs of ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801B03E4
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x1800DEF78 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180159CD4 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800DF928 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801B0524 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::RemoveVisual(CVisualGroup *this, const struct CVisual *a2)
{
  CExcludeVisualReference **v2; // r8
  CExcludeVisualReference *v5; // rcx
  __int64 v6; // r8
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference **)*((_QWORD *)this + 7);
  while ( v2 != *((CExcludeVisualReference ***)this + 8) )
  {
    if ( !CExcludeVisualReference::GetVisual(*v2) || a2 == CExcludeVisualReference::GetVisual(v5) )
      v2 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 56,
                                           &v7);
    else
      v2 = (CExcludeVisualReference **)(v6 + 8);
  }
}
