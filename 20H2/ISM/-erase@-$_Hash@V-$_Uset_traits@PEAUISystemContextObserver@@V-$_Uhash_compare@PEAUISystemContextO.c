/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18012DAA4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver___std::_Uhash_compare_ISystemContextObserver___std::hash_ISystemContextObserver____std::equal_to_ISystemContextObserver______std::allocator_ISystemContextObserver____0___::_Insert_unverified_ISystemContextObserver___const_std::_Not_a_node_tag__::_1_::catch$47 @ 0x1800511E5 (_std--_Hash_std--_Uset_traits_ISystemContextObserver___std--_Uhash_compare_ISystemC_ea_1800511E5.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Insert_unverified_unsigned___int64_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_unsigned___int64____std::_Iterator_base0____::_1_::catch$55 @ 0x18012B65F (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_18012B65F.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Insert_unverified_unsigned___int64_const__std::_Not_a_node_tag__::_1_::catch$47 @ 0x18012B7EC (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_18012B7EC.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18012DB38 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver___std::_Uhash_compare_ISystemContextObserver___std::hash_ISystemContextObserver____std::equal_to_ISystemContextObserver______std::allocator_ISystemContextObserver____0___::_Insert_unverified_ISystemContextObserver___const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver______std::_Iterator_base0____::_1_::catch$55 @ 0x1801474D3 (_std--_Hash_std--_Uset_traits_ISystemContextObserver___std--_Uhash_compare_ISystemC_ea_1801474D3.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x1801478C0 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUIS_ea_1801478C0.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180098FE0 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rax
  __int64 *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 8uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & appended)) == v6 )
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
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  v10 = *std::list<ISystemContextObserver *>::erase((__int64)(a1 + 1), &v12, v6);
  result = a2;
  *a2 = v10;
  return result;
}
