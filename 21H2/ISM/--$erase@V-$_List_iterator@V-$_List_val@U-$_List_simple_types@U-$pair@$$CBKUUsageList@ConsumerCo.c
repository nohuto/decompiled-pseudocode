/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@1@V21@@Z @ 0x18009774C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)______0___::_Insert_unverified_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____________::_1_::catch$55 @ 0x18004F464 (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void___bool_(___ea_18004F464.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessorLegacy::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache____0___::_Insert_unverified_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache__________::_1_::catch$55 @ 0x18009758A (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessorLegacy--PointerCache__ea_18009758A.c)
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)______0___::_Insert_unverified_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____________::_1_::catch$55 @ 0x1800BC526 (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void___bool_(___ea_1800BC526.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800BCA2C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180175920 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@@Z @ 0x1800993F4 (-erase@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagRECT@@@std@@@2@@std@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 4uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  std::list<std::pair<unsigned __int64 const,tagRECT>>::erase(a1 + 1, a2, v6);
  return a2;
}
