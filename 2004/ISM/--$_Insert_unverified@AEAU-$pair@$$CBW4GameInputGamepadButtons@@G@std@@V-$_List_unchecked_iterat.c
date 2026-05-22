/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@1@@Z @ 0x18011F024
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180123D4C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInpu.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800382BC (-_Check_size@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGa.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180099080 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_unverified<std::pair<enum GameInputGamepadButtons const,unsigned short> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
{
  __int64 appended; // rax
  _QWORD *v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // [rsp+50h] [rbp+18h] BYREF
  __int64 v27; // [rsp+58h] [rbp+20h]

  v27 = a4;
  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v9 = appended & v8[6];
  v10 = 2 * v9;
  v11 = v8[3];
  v12 = v8[1];
  v13 = *(_QWORD *)(v11 + 16 * v9);
  if ( v12 != v13 )
  {
    v12 = **(_QWORD **)(v11 + 16 * v9 + 8);
    while ( v12 != v13 )
    {
      v12 = *(_QWORD *)(v12 + 8);
      if ( *(_DWORD *)a3 == *(_DWORD *)(v12 + 16) )
      {
        std::list<ISystemContextObserver *>::erase((__int64)(v8 + 1), &v26, (__int64 *)a4);
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v15 = *(_QWORD *)a4;
  if ( v12 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v15;
    **(_QWORD **)(v15 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v16 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v16;
  }
  v17 = v8[3];
  v18 = *(_QWORD *)(v17 + 16 * v9);
  if ( v18 == v8[1] )
  {
    *(_QWORD *)(v17 + 16 * v9) = a4;
    v19 = v8[3];
    *(_QWORD *)(v19 + 16 * v9 + 8) = a4;
  }
  else
  {
    v20 = (__int64 *)(v17 + 16 * v9);
    if ( v18 == v12 )
    {
      *v20 = a4;
    }
    else
    {
      v21 = (__int64 *)v20[1];
      v22 = *v21;
      v20[1] = *v21;
      if ( v22 != a4 )
      {
        v23 = v8[3];
        v24 = *(_QWORD *)(v23 + 8 * v10 + 8);
        *(_QWORD *)(v23 + 8 * v10 + 8) = *(_QWORD *)(v24 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Check_size((__int64)v8);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>,void>(
      a1,
      &v26,
      v27);
    throw;
  }
  return result;
}
