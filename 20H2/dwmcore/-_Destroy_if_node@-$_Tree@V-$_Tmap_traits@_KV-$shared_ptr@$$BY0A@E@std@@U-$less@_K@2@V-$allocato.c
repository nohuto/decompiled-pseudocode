/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@Z @ 0x1801EF520
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@1@Z @ 0x1801EE1BC (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173814 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a2[6];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Deallocate<16,0>(a2, 0x38uLL);
}
