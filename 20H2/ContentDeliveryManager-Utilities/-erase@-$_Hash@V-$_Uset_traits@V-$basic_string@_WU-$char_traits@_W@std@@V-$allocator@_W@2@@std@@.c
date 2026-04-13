/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V32@@Z @ 0x18008BAC4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0____::_1_::catch$0 @ 0x1800D56A5 (_std--_Hash_std--_Uset_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800D56A5.c)
 *     _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_std::_Nil__::_1_::catch$0 @ 0x1800D682A (_std--_Hash_std--_Uset_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800D682A.c)
 * Callees:
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x18008BBF0 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // r11
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *result; // rax
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3 + 2;
  v6 = 2LL * a3[4];
  if ( a3[5] >= 8uLL )
    v3 = (_QWORD *)*v3;
  v7 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v7 < v6; i = 0x100000001B3LL * (v9 ^ i) )
    v9 = *((unsigned __int8 *)v3 + v7++);
  v10 = a1[5];
  v11 = v10 & (i ^ HIDWORD(i));
  if ( a1[6] <= v11 )
    v11 += -1LL - (v10 >> 1);
  v12 = a1[2];
  v13 = 2 * v11;
  if ( *(_QWORD **)(v12 + 8 * v13 + 8) == a3 )
  {
    if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
    {
      *(_QWORD *)(v12 + 8 * v13) = *a1;
      v12 = a1[2];
      v14 = *a1;
    }
    else
    {
      v14 = a3[1];
    }
    *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
  }
  else if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
  {
    *(_QWORD *)(v12 + 8 * v13) = *a3;
  }
  v15 = *(_QWORD *)std::list<std::wstring>::erase(a1, &v17);
  result = a2;
  *a2 = v15;
  return result;
}
