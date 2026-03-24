/*
 * XREFs of ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E4DDC
 * Callers:
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800E4CF8 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801556E8 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E4EA4 (--$_Emplace_reallocate@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisual.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E500C (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E50F4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5648 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AC694 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AddVisual(CVisualGroup *this, struct CVisual *a2)
{
  char *v2; // rbx
  CExcludeVisualReference **v4; // r8
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  CExcludeVisualReference *v9; // rsi
  CExcludeVisualReference **v10; // rdx
  CExcludeVisualReference *v11; // rbx
  CExcludeVisualReference *v13; // rcx
  struct CVisual *Visual; // rax
  struct CVisual *v15; // rcx
  CExcludeVisualReference *v16; // rax
  struct CExcludeVisualReference *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  CExcludeVisualReference *v19; // [rsp+70h] [rbp+20h] BYREF

  v2 = (char *)this + 56;
  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 7);
  v6 = 0;
  while ( v4 != *((CExcludeVisualReference ***)this + 8) )
  {
    if ( CExcludeVisualReference::GetVisual(*v4) )
    {
      Visual = CExcludeVisualReference::GetVisual(v13);
      v15 = 0LL;
      if ( a2 != Visual )
        v15 = a2;
      a2 = v15;
    }
    else
    {
      v4 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(v2, &v19);
    }
  }
  if ( a2 )
  {
    v19 = 0LL;
    v17 = 0LL;
    v18 = 1;
    v7 = CExcludeVisualReference::Create(a2, &v17);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC5u, 0LL);
    if ( v18 )
    {
      v9 = v19;
      v19 = v17;
      if ( v9 )
      {
        CExcludeVisualReference::~CExcludeVisualReference(v9);
        operator delete(v9);
      }
    }
    v10 = (CExcludeVisualReference **)*((_QWORD *)v2 + 1);
    if ( *((CExcludeVisualReference ***)v2 + 2) == v10 )
    {
      std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
        v2,
        v10,
        &v19);
    }
    else
    {
      v16 = v19;
      v19 = 0LL;
      *v10 = v16;
      *((_QWORD *)v2 + 1) += 8LL;
    }
    v11 = v19;
    if ( v19 )
    {
      CExcludeVisualReference::~CExcludeVisualReference(v19);
      operator delete(v11);
    }
  }
  return v6;
}
