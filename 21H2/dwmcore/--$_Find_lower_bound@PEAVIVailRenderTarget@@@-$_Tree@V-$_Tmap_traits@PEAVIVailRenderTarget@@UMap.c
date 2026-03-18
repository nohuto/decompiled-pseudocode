/*
 * XREFs of ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0
 * Callers:
 *     ?TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1800791C0 (-TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPE.c)
 *     ?OnRenderTargetBeginRender@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800794C4 (-OnRenderTargetBeginRender@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAV.c)
 *     ??$_Emplace@U?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@1@@Z @ 0x1801D1830 (--$_Emplace@U-$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@st.c)
 *     ??$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D1940 (--$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@.c)
 *     ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC (--$_Try_emplace@PEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Int.c)
 *     ?OnRenderTargetPostPresent@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1801D53B4 (-OnRenderTargetPostPresent@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAV.c)
 *     ?OnRenderTargetRetirement@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIVailRenderTarget@@_K@Z @ 0x1801D5648 (-OnRenderTargetRetirement@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
