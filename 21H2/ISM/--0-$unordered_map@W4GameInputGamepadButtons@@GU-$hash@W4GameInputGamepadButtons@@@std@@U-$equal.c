/*
 * XREFs of ??0?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@QEAA@XZ @ 0x180025200
 * Callers:
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001900 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@1@AEBV?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@1@@Z @ 0x180025234 (--0-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGamepadButto.c)
 */

int *__fastcall std::unordered_map<enum GameInputGamepadButtons,unsigned short>::unordered_map<enum GameInputGamepadButtons,unsigned short>(
        __int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>(
    a1,
    &v2);
  return &ControllerProcessor::s_controllerCurrentKeyMap;
}
