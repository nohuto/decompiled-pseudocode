/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@1@@Z @ 0x18003827C
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800193C0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x180122434 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003833C (-_Check_size@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGa.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180098FE0 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_unverified<std::pair<enum GameInputGamepadButtons const,unsigned short>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rax
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 **v17; // rax
  __int64 *v18; // rdx
  char v19; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v20; // [rsp+68h] [rbp+20h]

  v20 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v8 = qword_180208C30 & appended;
  v9 = 2 * (qword_180208C30 & appended);
  v10 = qword_180208C18;
  v11 = qword_180208C08;
  if ( *(_QWORD *)(qword_180208C18 + 16 * (qword_180208C30 & appended)) == qword_180208C08 )
    v12 = qword_180208C08;
  else
    v12 = **(_QWORD **)(qword_180208C18 + 16 * (qword_180208C30 & appended) + 8);
  while ( v12 != *(_QWORD *)(qword_180208C18 + 16 * (qword_180208C30 & appended)) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v12 + 16) )
    {
      std::list<ISystemContextObserver *>::erase(&qword_180208C08, &v19, a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v15 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v15;
    v10 = qword_180208C18;
    v11 = qword_180208C08;
  }
  if ( *(_QWORD *)(v10 + 8 * v9) == v11 )
  {
    *(_QWORD *)(v10 + 16 * v8) = a4;
    *(_QWORD *)(qword_180208C18 + 8 * v9 + 8) = a4;
  }
  else
  {
    v16 = 2 * v8;
    if ( *(_QWORD *)(v10 + 8 * v9) == v12 )
    {
      *(_QWORD *)(v10 + 8 * v16) = a4;
    }
    else
    {
      v17 = *(__int64 ***)(v10 + 8 * v16 + 8);
      v18 = *v17;
      *(_QWORD *)(v10 + 8 * v16 + 8) = *v17;
      if ( v18 != a4 )
        *(_QWORD *)(qword_180208C18 + 8 * v9 + 8) = *(_QWORD *)(*(_QWORD *)(qword_180208C18 + 8 * v9 + 8) + 8LL);
    }
  }
  std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Check_size(&ControllerProcessor::s_controllerCurrentKeyMap);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
