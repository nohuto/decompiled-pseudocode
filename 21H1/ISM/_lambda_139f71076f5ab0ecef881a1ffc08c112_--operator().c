/*
 * XREFs of _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x18019F6F8
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x18019EE5C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x18019EF44 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shar_ea_18019EF44.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x18019F98C (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A242C (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

char __fastcall lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(__int64 **a1, _QWORD *a2)
{
  _OWORD *v3; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  char v13; // al
  std::_Ref_count_base *v14; // rcx
  char v15; // bl
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v3 = (_OWORD *)*a2;
  if ( (*((_WORD *)v3 + 12) & 0x200) == 0 )
  {
    v10 = a1[2];
    goto LABEL_13;
  }
  v5 = **a1;
  if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)v3 && *(_DWORD *)(v5 + 32) == *((_DWORD *)v3 + 2) )
  {
    v6 = a1[1];
    *(_QWORD *)&v16 = 0LL;
    DWORD2(v16) = 0;
    v7 = v16;
    ++*(_DWORD *)v6;
    *(_OWORD *)*a2 = v7;
    *(_DWORD *)(*a2 + 16LL) = 0;
    *(_WORD *)(*a2 + 24LL) |= 0x100u;
  }
  else
  {
    v8 = *((_QWORD *)v3 + 6);
    v16 = *(_OWORD *)a1[2];
    v9 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___(
           &v17,
           **((_QWORD ***)v3 + 6),
           *((_QWORD **)v3 + 6),
           (__int64)&v16);
    std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(*a2 + 48LL, &v18, *v9, v8);
  }
  if ( (*(_WORD *)(*a2 + 24LL) & 0x100) != 0 && !*(_QWORD *)(*a2 + 56LL) )
  {
    v10 = a1[2];
LABEL_13:
    v13 = lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v10, a2);
    v14 = (std::_Ref_count_base *)a2[1];
    v15 = v13;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return v15;
  }
  v11 = (std::_Ref_count_base *)a2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0;
}
