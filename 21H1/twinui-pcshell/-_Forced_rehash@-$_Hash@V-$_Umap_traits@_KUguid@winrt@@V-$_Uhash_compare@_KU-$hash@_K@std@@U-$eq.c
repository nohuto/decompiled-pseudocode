/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BAA14
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800BA488 (-_Check_size@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal.c)
 * Callees:
 *     ??$_Insert_unverified@U?$pair@$$CB_KUguid@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUguid@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@1@@Z @ 0x1800B21D0 (--$_Insert_unverified@U-$pair@$$CB_KUguid@winrt@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@AEAAX_K@Z @ 0x1800BAFE4 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@CAXXZ @ 0x1800BB1B0 (-_Xlength@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@std@@.c)
 *     ?assign@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800BB494 (-assign@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@_K@std@@@s.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  if ( 2 * v5 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( (unsigned __int64)(2 * v5) > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::_Xlength();
    std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::_Reallocate_exactly(
      a1 + 3,
      2 * v5);
  }
  v10 = a1[1];
  std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>::assign(
    a1 + 3,
    2 * v5,
    &v10);
  a1[7] = v5;
  a1[6] = v5 - 1;
  result = (_QWORD *)a1[1];
  if ( (_QWORD *)*result != result )
  {
    v7 = result[1];
    do
    {
      v8 = *(_QWORD *)a1[1];
      result = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,winrt::guid>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>(
                           (__int64)a1,
                           (__int64)v9,
                           (const unsigned __int8 *)(v8 + 16),
                           (__int64 *)v8);
    }
    while ( v8 != v7 );
  }
  return result;
}
