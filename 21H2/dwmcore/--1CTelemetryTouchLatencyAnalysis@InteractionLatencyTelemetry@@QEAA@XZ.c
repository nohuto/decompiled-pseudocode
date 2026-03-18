/*
 * XREFs of ??1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADD08
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@1@@Z @ 0x180019864 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@In.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXXZ @ 0x1801D587C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis(
        void **this)
{
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v2; // rbx
  __int64 v3; // rsi

  v2 = (struct InteractionLatencyTelemetry::TouchScenarioInfo *)(this + 1);
  v3 = 10LL;
  do
  {
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(
      (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)this,
      v2,
      1,
      0);
    v2 = (struct InteractionLatencyTelemetry::TouchScenarioInfo *)((char *)v2 + 512);
    --v3;
  }
  while ( v3 );
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SendInteractionSummary((InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)this);
  std::_Tree_val<std::_Tree_simple_types<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
    (__int64)(this + 868),
    (__int64)(this + 868),
    *((__int64 **)this[868] + 1));
  std::_Deallocate<16,0>(this[868], 0x88uLL);
  std::wstring::_Tidy_deallocate(this + 645);
  std::wstring::_Tidy_deallocate(this + 641);
  `vector destructor iterator'(
    (char *)this + 8,
    512LL,
    10LL,
    (void (__fastcall *)(char *))InteractionLatencyTelemetry::TouchScenarioInfo::~TouchScenarioInfo);
}
