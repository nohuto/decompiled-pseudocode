/*
 * XREFs of ??1?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@QEAA@XZ @ 0x18003B328
 * Callers:
 *     _dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180051F40 (_dynamic_atexit_destructor_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 */

void std::unordered_map<enum GameInputGamepadButtons,unsigned short>::~unordered_map<enum GameInputGamepadButtons,unsigned short>()
{
  _QWORD **v0; // rcx
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(&qword_180209C38);
  v0 = (_QWORD **)qword_180209C28;
  **(_QWORD **)(qword_180209C28 + 8) = 0LL;
  v1 = *v0;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x18);
      v1 = v2;
    }
    while ( v2 );
  }
  std::_Deallocate<16,0>((void *)qword_180209C28, (const struct std::nothrow_t *)0x18);
}
