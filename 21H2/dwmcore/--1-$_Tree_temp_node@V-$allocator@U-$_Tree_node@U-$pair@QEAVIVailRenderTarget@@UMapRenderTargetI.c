/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1CFC
 * Callers:
 *     ??$_Emplace@U?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@1@@Z @ 0x1801D1830 (--$_Emplace@U-$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@st.c)
 *     ??$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D1940 (--$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@.c)
 *     ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC (--$_Try_emplace@PEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Int.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180195BD0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    std::vector<CDataSourceReader *>::_Tidy(v2 + 112);
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x88uLL);
  }
}
