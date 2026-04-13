/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@1@@Z @ 0x180041DA0
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003F364 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180041488 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x180042068 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode<std::pair<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h]

  v4 = std::_Tree_buy<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>::_Buynode0(a1);
  *(_WORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 56) = 7LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_WORD *)(v4 + 32) = 0;
  std::wstring::_Assign_rv((_QWORD *)(v4 + 32), a2);
  *(_QWORD *)(v4 + 64) = a2[4];
  *(_QWORD *)(v4 + 72) = a2[5];
  a2[4] = 0LL;
  a2[5] = 0LL;
  return v4;
}
