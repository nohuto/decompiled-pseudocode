/*
 * XREFs of ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x180122984
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18011DC30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@AEBW4GameInputGamepadButtons@@@Z @ 0x18000BA20 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGa.c)
 *     ??$_Insert_unverified@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@1@@Z @ 0x18003819C (--$_Insert_unverified@U-$pair@$$CBW4GameInputGamepadButtons@@G@std@@V-$_List_unchecked_iterator@.c)
 *     ??$emplace_front@AEBW4GameInputGamepadButtons@@AEAG@?$list@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x1800382D0 (--$emplace_front@AEBW4GameInputGamepadButtons@@AEAG@-$list@U-$pair@$$CBW4GameInputGamepadButtons.c)
 */

__int64 __fastcall ControllerProcessor::SetControllerVirtualKeyMappings(__int64 a1)
{
  __int16 v1; // bx
  __int64 v2; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-10h] BYREF
  __int16 v5; // [rsp+40h] [rbp+10h] BYREF
  int v6; // [rsp+48h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+20h] BYREF

  v6 = 8;
  v1 = 196;
  if ( !(_BYTE)a1 )
    v1 = 27;
  v5 = v1;
  std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::lower_bound(
    a1,
    &v7,
    (unsigned __int8 *)&v6);
  if ( v7 == (__int64 *)qword_180209C28 )
  {
    std::list<std::pair<enum GameInputGamepadButtons const,unsigned short>>::emplace_front<enum GameInputGamepadButtons const &,unsigned short &>(
      (__int64 **)&qword_180209C28,
      &v6,
      &v5);
    std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_unverified<std::pair<enum GameInputGamepadButtons const,unsigned short>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>>(
      v2,
      (__int64)v4,
      (const unsigned __int8 *)(*(_QWORD *)qword_180209C28 + 16LL),
      *(__int64 **)qword_180209C28);
  }
  else
  {
    *((_WORD *)v7 + 10) = v1;
  }
  return 0LL;
}
