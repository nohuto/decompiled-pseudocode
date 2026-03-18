/*
 * XREFs of ?OnRenderTargetPostPresent@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIRenderTarget@@@Z @ 0x1801D53B4
 * Callers:
 *     ?TelemetryOnVailEndPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1801AE710 (-TelemetryOnVailEndPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0 (--$_Find_lower_bound@PEAVIVailRenderTarget@@@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMap.c)
 *     ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC (--$_Try_emplace@PEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Int.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetPostPresent(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct IRenderTarget *a2)
{
  int v3; // r14d
  char *v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  LARGE_INTEGER v7; // r10
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+20h] [rbp-20h] BYREF
  LARGE_INTEGER v17; // [rsp+78h] [rbp+38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+40h] BYREF
  LARGE_INTEGER v19; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  v17.QuadPart = 0LL;
  if ( (**(int (__fastcall ***)(char *, GUID *, LARGE_INTEGER *))v4)(
         v4,
         &GUID_813c29c9_c423_4bba_a41c_de7fd4c7b061,
         &v17) < 0 )
  {
LABEL_12:
    v7 = v17;
    goto LABEL_13;
  }
  v5 = (__int64 *)((char *)this + 6944);
  PerformanceCount = v17;
  v6 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
                     v5,
                     (__int64)v16,
                     (unsigned __int64 *)&PerformanceCount.QuadPart)
                 + 16);
  if ( !*(_BYTE *)(v6 + 25) && v7.QuadPart >= *(_QWORD *)(v6 + 32) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v3 = (*(__int64 (__fastcall **)(LARGE_INTEGER, _QWORD))(*(_QWORD *)v17.QuadPart + 24LL))(v17, 0LL);
    if ( v3 >= 0 )
    {
      v8 = PerformanceCount;
      v19 = v17;
      *(LARGE_INTEGER *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                      v5,
                                      (__int64)v16,
                                      (unsigned __int64 *)&v19.QuadPart)
                       + 96LL) = v8;
      v19 = v17;
      v9 = MEMORY[0]
         - *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                    v5,
                                    (__int64)v16,
                                    (unsigned __int64 *)&v19.QuadPart)
                     + 48LL);
      v19 = v17;
      if ( *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                    v5,
                                    (__int64)v16,
                                    (unsigned __int64 *)&v19.QuadPart)
                     + 48LL) )
      {
        if ( v9 > 1 )
        {
          v19 = v17;
          v12 = std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                  v5,
                  (__int64)v16,
                  (unsigned __int64 *)&v19.QuadPart);
          ++*(_QWORD *)(*(_QWORD *)v12 + 64LL);
          v19 = v17;
          if ( v9 > *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                             v5,
                                             (__int64)v16,
                                             (unsigned __int64 *)&v19.QuadPart)
                              + 72LL) )
          {
            v19 = v17;
            *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                     v5,
                                     (__int64)v16,
                                     (unsigned __int64 *)&v19.QuadPart)
                      + 72LL) = v9;
          }
          v13 = MEMORY[0];
          v19 = v17;
          *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                   v5,
                                   (__int64)v16,
                                   (unsigned __int64 *)&v19.QuadPart)
                    + 48LL) = v13;
        }
      }
      else if ( MEMORY[0] > 1u )
      {
        v19 = v17;
        *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                v5,
                                (__int64)v16,
                                (unsigned __int64 *)&v19.QuadPart)
                 + 56LL) = 1;
        v19 = v17;
        v10 = std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                v5,
                (__int64)v16,
                (unsigned __int64 *)&v19.QuadPart);
        ++*(_QWORD *)(*(_QWORD *)v10 + 64LL);
        v11 = MEMORY[0];
        v19 = v17;
        *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                 v5,
                                 (__int64)v16,
                                 (unsigned __int64 *)&v19.QuadPart)
                  + 48LL) = v11;
        v19 = v17;
        *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                 v5,
                                 (__int64)v16,
                                 (unsigned __int64 *)&v19.QuadPart)
                  + 72LL) = v9;
      }
    }
    goto LABEL_12;
  }
LABEL_13:
  if ( v7.QuadPart )
  {
    v14 = v7.QuadPart + 8 + *(int *)(*(_QWORD *)(v7.QuadPart + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v3;
}
