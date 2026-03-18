/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x180208FC4
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E7B94 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180167490 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@1@@Z @ 0x1801E79A0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  void **v1; // rbx
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 8);
  v2 = (__int64 *)*((_QWORD *)this + 1);
  v3 = *v2;
  v5 = *v2;
  while ( (__int64 *)v3 != v2 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 )
      *(_QWORD *)(v4 + 56) = 0LL;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v5);
    v3 = v5;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDevice const * const,CGradientSource::Cache>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CD3DDevice const * const,CGradientSource::Cache>,void *>>>(
    (__int64)v1,
    (__int64)v1,
    *((_QWORD *)*v1 + 1));
  std::_Deallocate<16,0>(*v1, 0x38uLL);
}
