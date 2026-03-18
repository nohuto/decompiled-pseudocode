/*
 * XREFs of ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1801FEFF8
 * Callers:
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180192DC0 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180192E90 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x180192CAC (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1801A9144 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@$$QEAV21@@Z @ 0x1801FEFC8 (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801FF5D4 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AddVisual(CVisualGroup *this, struct CVisual *a2)
{
  __int64 *v2; // rsi
  CExcludeVisualReference **v4; // r8
  unsigned int v6; // edi
  CExcludeVisualReference *v7; // rcx
  struct CVisual *Visual; // rax
  struct CVisual *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  CExcludeVisualReference *v12; // rcx
  struct CExcludeVisualReference *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  CExcludeVisualReference *v16; // [rsp+70h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  v6 = 0;
  while ( v4 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v4) )
    {
      Visual = CExcludeVisualReference::GetVisual(v7);
      a2 = 0LL;
      if ( v9 != Visual )
        a2 = v9;
    }
    else
    {
      v4 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(v2, &v16);
    }
  }
  if ( a2 )
  {
    v16 = 0LL;
    v14 = 0LL;
    v15 = 1;
    v10 = CExcludeVisualReference::Create(a2, (struct CWeakResourceReference ***)&v14);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xC5u);
    if ( v15 )
    {
      v12 = v16;
      v16 = v14;
      if ( v12 )
        CExcludeVisualReference::`scalar deleting destructor'(v12);
    }
    std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
      v2,
      (__int64 *)&v16);
    if ( v16 )
      CExcludeVisualReference::`scalar deleting destructor'(v16);
  }
  return v6;
}
