/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x180043A68
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual_::_1_::dtor$2 @ 0x1800D0D0C (_CreativeFramework--SubscribedContentStore--AreSubscriptionContextsEqual_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$12 @ 0x1800D0E08 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$8 @ 0x1800D1080 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D1080.c)
 *     _std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343____::_1_::dtor$0 @ 0x1800D1481 (_std--_Find_if_std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--p.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::operator[]_::_1_::dtor$1 @ 0x1800D2393 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--al_ea_1800D2393.c)
 *     _CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch_::_1_::dtor$0 @ 0x1800D5C7C (_CreativeFramework--Actions--ResolveTargetPackageFamilyNameForLaunch_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$0 @ 0x1800D5CA9 (_CreativeFramework--Actions--MakeLaunchUriService_--_1_--dtor$0.c)
 *     _std::map_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_________::operator[]_::_1_::dtor$1 @ 0x1800D6C19 (_std--map_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t____std--bas.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<std::wstring,std::wstring>::~pair<std::wstring,std::wstring>(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 56) >= 8uLL )
    operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
}
