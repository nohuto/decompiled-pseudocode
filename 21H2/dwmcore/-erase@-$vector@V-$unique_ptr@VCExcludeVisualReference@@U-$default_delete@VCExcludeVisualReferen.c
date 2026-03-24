/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AC694
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E4DDC (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AC150 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801AC554 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AC5BC (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E50F4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

CExcludeVisualReference ***__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
        __int64 a1,
        CExcludeVisualReference ***a2,
        CExcludeVisualReference **a3)
{
  CExcludeVisualReference **v3; // rbp
  CExcludeVisualReference **v4; // rdi
  CExcludeVisualReference **v8; // rax
  CExcludeVisualReference **v9; // rsi
  CExcludeVisualReference *v10; // rax
  CExcludeVisualReference *v11; // r15
  void *v12; // rdi
  CExcludeVisualReference ***result; // rax

  v3 = *(CExcludeVisualReference ***)(a1 + 8);
  v4 = a3 + 1;
  v8 = v3;
  if ( a3 + 1 != v3 )
  {
    v9 = a3;
    do
    {
      if ( v9 != v4 )
      {
        v10 = *v4;
        *v4 = 0LL;
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
        {
          CExcludeVisualReference::~CExcludeVisualReference(v11);
          operator delete(v11);
        }
      }
      ++v4;
      ++v9;
    }
    while ( v4 != v3 );
    v3 = *(CExcludeVisualReference ***)(a1 + 8);
    v8 = v3;
  }
  v12 = *(v3 - 1);
  if ( v12 )
  {
    CExcludeVisualReference::~CExcludeVisualReference(*(v3 - 1));
    operator delete(v12);
    v8 = *(CExcludeVisualReference ***)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}
