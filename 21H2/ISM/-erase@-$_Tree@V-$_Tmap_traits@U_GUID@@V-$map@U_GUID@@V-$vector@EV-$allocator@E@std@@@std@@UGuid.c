/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x180167B38
 * Callers:
 *     ?RemoveNode@NodePropertyCache@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@@Z @ 0x1801637C4 (-RemoveNode@NodePropertyCache@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18002BED4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x18008FFB0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@@Z @ 0x180151F88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@st.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // rbx
  void **v8; // rsi
  __int64 **result; // rax

  v3 = a1;
  v5 = a3[2];
  v6 = a3;
  if ( *(_BYTE *)(v5 + 25) )
  {
    for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      v6 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
  }
  v8 = (void **)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
                  v3,
                  a3);
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *>>>(
    (__int64)(v8 + 6),
    (__int64)(v8 + 6),
    *((_QWORD *)v8[6] + 1));
  std::_Deallocate<16,0>(v8[6], (const struct std::nothrow_t *)0x48);
  std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x40);
  result = a2;
  *a2 = i;
  return result;
}
