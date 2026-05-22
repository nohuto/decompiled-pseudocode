/*
 * XREFs of ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x180120784
 * Callers:
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x180122018 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@AEBW4GameInputGamepadButtons@@@Z @ 0x18000BA20 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGa.c)
 */

__int64 __fastcall ControllerProcessor::GetControllerVirtualKeyMappingFor(__int64 a1)
{
  unsigned __int16 v1; // bx
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 *v4; // [rsp+48h] [rbp+10h] BYREF

  v3[0] = 8;
  v1 = 0;
  std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::lower_bound(
    a1,
    (__int64 **)&v4,
    (unsigned __int8 *)v3);
  if ( v4 != (unsigned __int16 *)qword_180208C08 )
    return v4[10];
  return v1;
}
