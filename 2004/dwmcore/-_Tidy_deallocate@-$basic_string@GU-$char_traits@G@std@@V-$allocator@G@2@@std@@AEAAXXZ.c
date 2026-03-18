/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18009663C
 * Callers:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z @ 0x180013444 (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180013564 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 *     ??4TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800137F0 (--4TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180060030 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@@Z @ 0x180087934 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x180094C40 (--_GCAnimationLoggingManager@@UEAAPEAXI@Z.c)
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x180095A20 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV-$basi.c)
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180095C18 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x18009657C (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV-$basic_string@G.c)
 *     ?erase@?$list@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x1800CAA74 (-erase@-$list@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$alloc.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800D63B8 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     _dynamic_atexit_destructor_for__g_debugTreeDumpDir__ @ 0x1800F3D10 (_dynamic_atexit_destructor_for__g_debugTreeDumpDir__.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180155244 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180155610 (--1TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x18015E028 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015E5A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z @ 0x18016256C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z.c)
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18019799C (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180198B20 (--1-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180198CCC (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801991BC (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 *     ?SetCompositorComment@CAnimationLoggingManager@@QEAAJPEBGI@Z @ 0x1801B2C7C (-SetCompositorComment@CAnimationLoggingManager@@QEAAJPEBGI@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020F684 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
