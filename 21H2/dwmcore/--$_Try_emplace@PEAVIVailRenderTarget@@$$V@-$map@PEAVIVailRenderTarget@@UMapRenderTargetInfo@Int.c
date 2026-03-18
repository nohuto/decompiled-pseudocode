/*
 * XREFs of ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC
 * Callers:
 *     ?TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1800791C0 (-TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPE.c)
 *     ?OnRenderTargetPostPresent@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1801D53B4 (-OnRenderTargetPostPresent@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAV.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180185C3C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIVailRenderTarget@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIVailRenderTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801CBB98 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIVailRenderTarget@@@1@V-$tuple@$$V@1@@-$_Tre.c)
 *     ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0 (--$_Find_lower_bound@PEAVIVailRenderTarget@@@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMap.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1CFC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAVIVailRenderTarget@@UMapRenderTargetI.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801D65F4 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Interactio.c)
 */

__int64 __fastcall std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  unsigned __int64 *v14; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
    a1,
    (__int64)&v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *a3 < *(_QWORD *)(v13 + 32) )
  {
    std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Check_grow_by_1(a1);
    v6 = *a1;
    v14 = a3;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
           (__int64)v11,
           (__int64)a1,
           v6,
           v7,
           &v14);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(v11);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
