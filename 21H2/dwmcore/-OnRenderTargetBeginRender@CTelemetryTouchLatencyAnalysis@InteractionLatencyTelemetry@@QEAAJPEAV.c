/*
 * XREFs of ?OnRenderTargetBeginRender@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800794C4
 * Callers:
 *     ?TelemetryOnVailBeginRenderTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1800794B0 (-TelemetryOnVailBeginRenderTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180195BD0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace@U?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@1@@Z @ 0x1801D1830 (--$_Emplace@U-$pair@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@st.c)
 *     ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0 (--$_Find_lower_bound@PEAVIVailRenderTarget@@@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMap.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D1B40 (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetBeginRender(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct IRenderTarget *a2)
{
  __int64 v3; // r8
  int v4; // edi
  unsigned __int64 v5; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  char v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  __int128 v18; // [rsp+88h] [rbp-78h]
  __int128 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-50h]
  _QWORD v22[3]; // [rsp+C0h] [rbp-40h] BYREF
  char v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int128 v26; // [rsp+F0h] [rbp-10h]
  __int128 v27; // [rsp+100h] [rbp+0h]
  _BYTE v28[32]; // [rsp+110h] [rbp+10h] BYREF

  v3 = *(int *)(*((_QWORD *)a2 + 1) + 4LL);
  v9 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))((char *)a2 + v3 + 8))(
         (char *)a2 + v3 + 8,
         &GUID_813c29c9_c423_4bba_a41c_de7fd4c7b061,
         (__int64 *)&v9);
  if ( v4 < 0 )
    goto LABEL_2;
  QueryPerformanceCounter(&PerformanceCount);
  v11[0] = v9;
  v7 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
                     (char *)this + 6944,
                     v12,
                     v11)
                 + 16);
  if ( *(_BYTE *)(v7 + 25) || v5 < *(_QWORD *)(v7 + 32) )
  {
    v20 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v22[1] = 0LL;
    v22[2] = 0LL;
    *(LARGE_INTEGER *)&v18 = PerformanceCount;
    v23 = v15;
    v21 = 0LL;
    v24 = v16;
    v25 = v17;
    v22[0] = v5;
    v26 = v18;
    v27 = v19;
    std::vector<unsigned __int64>::vector<unsigned __int64>(v28, &v20);
    std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Emplace<std::pair<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>>(
      (char *)this + 6944,
      v11,
      v22);
    std::vector<CDataSourceReader *>::_Tidy(v28);
    std::vector<CDataSourceReader *>::_Tidy(&v20);
LABEL_2:
    v5 = v9;
  }
  if ( v5 )
  {
    v8 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v4;
}
