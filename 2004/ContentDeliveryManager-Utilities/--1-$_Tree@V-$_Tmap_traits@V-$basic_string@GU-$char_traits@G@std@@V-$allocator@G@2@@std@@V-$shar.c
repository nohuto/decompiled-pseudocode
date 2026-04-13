/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180033250
 * Callers:
 *     CreativeFramework::Health::details::_dynamic_atexit_destructor_for__s_placementToBaseScenarioEventsMap__ @ 0x1800D8D50 (CreativeFramework--Health--details--_dynamic_atexit_destructor_for__s_placementToBaseScenarioEve.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x18003AA7C (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@1@@Z @ 0x18003C24C (--$destroy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_p.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>(
        __int64 a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rbx
  _BYTE *v3; // rdi
  __int64 v4; // rcx

  v1 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  v2 = *(_BYTE **)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8);
  v3 = v2;
  if ( !v2[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::_Erase(
        a1,
        *((_QWORD *)v3 + 2));
      v3 = *(_BYTE **)v3;
      std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>,void *>>>::destroy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>(
        v4,
        v2 + 32);
      operator delete(v2);
      v2 = v3;
    }
    while ( !v3[25] );
    v1 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  }
  *(_QWORD *)(v1 + 8) = v1;
  *(_QWORD *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 16) = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  qword_180199450 = 0LL;
  operator delete((void *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap);
}
