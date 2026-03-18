/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIVailRenderTarget@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIVailRenderTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801CBB98
 * Callers:
 *     ??$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D1940 (--$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@.c)
 *     ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC (--$_Try_emplace@PEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Int.c)
 * Callees:
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@@Z @ 0x1801D1B10 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@QEAVIVailRenderTarget@@UMapRenderT.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *v7; // rbx
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>();
  v7 = *(_QWORD **)(a1 + 8);
  v7[4] = **a5;
  memset_0(v7 + 5, 0, 0x60uLL);
  v7[15] = 0LL;
  v8 = 0LL;
  v7[16] = 0LL;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
  {
    *(_BYTE *)(v8 + *(_QWORD *)(a1 + 8) + 24) = 0;
    ++v8;
  }
  while ( v8 < 2 );
  return a1;
}
