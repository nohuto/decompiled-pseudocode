/*
 * XREFs of ??$?0U?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@1@$$QEAU?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@1@@Z @ 0x1801CBC28
 * Callers:
 *     ??$_Emplace@U?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@1@@Z @ 0x1801D1830 (--$_Emplace@U-$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@st.c)
 * Callees:
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@@Z @ 0x1801D1B10 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@QEAVIVailRenderTarget@@UMapRenderT.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>();
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)a4;
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v7 + 48) = *(_QWORD *)(a4 + 16);
  *(_BYTE *)(v7 + 56) = *(_BYTE *)(a4 + 24);
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(v7 + 72) = *(_QWORD *)(a4 + 40);
  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v7 + 96) = *(_OWORD *)(a4 + 64);
  *(_QWORD *)(v7 + 112) = 0LL;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 112) = *(_QWORD *)(a4 + 80);
  *(_QWORD *)(v7 + 120) = *(_QWORD *)(a4 + 88);
  *(_QWORD *)(v7 + 128) = *(_QWORD *)(a4 + 96);
  *(_QWORD *)(a4 + 80) = 0LL;
  *(_QWORD *)(a4 + 88) = 0LL;
  *(_QWORD *)(a4 + 96) = 0LL;
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
