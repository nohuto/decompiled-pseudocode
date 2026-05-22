/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@@Z @ 0x1801374A4
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180139C00 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035628 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180036990 (-_Check_size@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@Uta.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009ABC0 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Insert_unverified<std::pair<tagMsgRoutingInfo const,IInputTarget *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 appended; // rax
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF
  __int64 v29; // [rsp+68h] [rbp+20h]

  v29 = a4;
  LODWORD(v28) = *a3;
  std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v28, 4uLL);
  LODWORD(v28) = a3[1];
  appended = std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)&v28, v9);
  v12 = a1[6] & (v11 ^ appended);
  v13 = 2 * v12;
  v14 = a1[3];
  v15 = a1[1];
  if ( v15 != *(_QWORD *)(v14 + 16 * v12) )
  {
    v15 = **(_QWORD **)(v14 + 16 * v12 + 8);
    while ( v15 != *(_QWORD *)(v14 + 8 * v13) )
    {
      v15 = *(_QWORD *)(v15 + 8);
      if ( operator==((__int64)a3, v15 + 16) )
      {
        std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase((__int64)(a1 + 1), &v28, (__int64 *)a4);
        *(_QWORD *)a2 = v15;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v17 = *(_QWORD *)a4;
  if ( v15 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v17;
    **(_QWORD **)(v17 + 8) = v15;
    **(_QWORD **)(v15 + 8) = a4;
    v18 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v18;
  }
  v19 = a1[3];
  v20 = *(_QWORD *)(v19 + 8 * v13);
  if ( v20 == a1[1] )
  {
    *(_QWORD *)(v19 + 16 * v12) = a4;
    v21 = a1[3];
    *(_QWORD *)(v21 + 8 * v13 + 8) = a4;
  }
  else
  {
    v22 = (_QWORD *)(v19 + 16 * v12);
    if ( v20 == v15 )
    {
      *v22 = a4;
    }
    else
    {
      v23 = (__int64 *)v22[1];
      v24 = *v23;
      v22[1] = *v23;
      if ( v24 != a4 )
      {
        v25 = a1[3];
        v26 = *(_QWORD *)(v25 + 8 * v13 + 8);
        *(_QWORD *)(v25 + 8 * v13 + 8) = *(_QWORD *)(v26 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Check_size((__int64)a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase(
      a1,
      &v28,
      v29);
    throw;
  }
  return result;
}
