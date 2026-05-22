/*
 * XREFs of ??$_Insert_unverified@QEAUISystemContextObserver@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@$$QEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x180036020
 * Callers:
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180035F80 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180024694 (-_End@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextOb.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800360F8 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemCo.c)
 *     ??$_Buy_if_not_node@QEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@1@$$QEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x18003616C (--$_Buy_if_not_node@QEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObser.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert_unverified<ISystemContextObserver * const,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // r11
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 **v15; // rsi
  __int64 **v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL) & a1[6];
  v6 = *std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_End(
          (__int64)a1,
          v19,
          v5);
  while ( v6 != *(_QWORD *)(a1[3] + 16 * v5) )
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( *v7 == *(_QWORD *)(v6 + 16) )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Buy_if_not_node<ISystemContextObserver * const>(
    a1,
    &v18,
    v7);
  v8 = v18;
  v9 = *v18;
  if ( v6 != *v18 )
  {
    *(_QWORD *)v18[1] = v9;
    **(_QWORD **)(v9 + 8) = v6;
    **(_QWORD **)(v6 + 8) = v8;
    v14 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = v8[1];
    v8[1] = v14;
  }
  v10 = 2 * v5;
  v11 = a1[3];
  v12 = *(_QWORD *)(v11 + 16 * v5);
  if ( v12 == a1[1] )
  {
    *(_QWORD *)(v11 + 16 * v5) = v8;
    *(_QWORD *)(a1[3] + 16 * v5 + 8) = v8;
  }
  else
  {
    v15 = (__int64 **)(v11 + 16 * v5);
    if ( v12 == v6 )
    {
      *v15 = v8;
    }
    else
    {
      v16 = (__int64 **)v15[1];
      v17 = *v16;
      v15[1] = *v16;
      if ( v17 != v8 )
        *(_QWORD *)(a1[3] + 8 * v10 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v10 + 8) + 8LL);
    }
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
