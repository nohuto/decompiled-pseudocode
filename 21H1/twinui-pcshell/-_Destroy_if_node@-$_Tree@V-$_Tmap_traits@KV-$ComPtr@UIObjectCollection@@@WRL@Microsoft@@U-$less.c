/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1803B1B94
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@1@1@Z @ 0x1803AFAF4 (--$_Insert_at@AEAU-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU-$_Tree_no.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_Microsoft::WRL::ComPtr_IApplicationFrame__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IApplicationFrame______0___::_Insert_hint_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IApplicationFrame____&_std::_Tree_node_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IApplicationFrame____void_______::_1_::catch$23 @ 0x1803AFE51 (_std--_Tree_std--_Tmap_traits_unsigned_long_Microsoft--WRL--ComPtr_IApplicationFrame__std--less_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_Microsoft::WRL::ComPtr_IObjectCollection__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection______0___::_Insert_nohint_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection____&_std::_Tree_node_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection____void_______::_1_::catch$19 @ 0x1803AFFA9 (_std--_Tree_std--_Tmap_traits_unsigned_long_Microsoft--WRL--ComPtr_IObjectCollection__std--less_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_Microsoft::WRL::ComPtr_IObjectCollection__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection______0___::_Insert_hint_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection____&_std::_Tree_node_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IObjectCollection____void_______::_1_::catch$23 @ 0x1803B251C (_std--_Tree_std--_Tmap_traits_unsigned_long_Microsoft--WRL--ComPtr_IObjectCollectio_ea_1803B251C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2 + 5);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
