/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30
 * Callers:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N@Z @ 0x180013DAC (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchSc.c)
 *     ??4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x180013E78 (--4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@2@PEAU32@@Z @ 0x1800428A0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingMan.c)
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x1800525F8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005ECC8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18005F320 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x180060038 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV-$basi.c)
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180061970 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV-$basic_string@G.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180064FA4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAVCResource@@UResourceDebugInfo.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x1800EE6E4 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800EE758 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimatio.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@@Z @ 0x1800EED30 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800F18EC (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ??1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADD08 (--1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ??1TouchScenarioInfo@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADDD0 (--1TouchScenarioInfo@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ??4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D1E10 (--4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEBUTouchScenarioInfo@2@_N@Z @ 0x1801D5950 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::_Tidy_deallocate(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v1 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
