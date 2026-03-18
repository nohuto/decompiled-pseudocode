/*
 * XREFs of ?OnRenderTargetRetirement@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIVailRenderTarget@@_K@Z @ 0x1801D5648
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0 (--$_Find_lower_bound@PEAVIVailRenderTarget@@@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMap.c)
 *     ??$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D1940 (--$_Try_emplace@AEBQEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetRetirement(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct IVailRenderTarget *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rdi
  int v6; // esi
  __int64 v7; // rdx
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  char *v10; // rbx
  __int64 v11; // r14
  unsigned __int8 v12; // dl
  _BYTE v14[16]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp+27h] BYREF
  struct IVailRenderTarget *v20; // [rsp+C0h] [rbp+6Fh] BYREF

  v20 = a2;
  v3 = (__int64 *)((char *)this + 6944);
  v6 = 0;
  v7 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
                     (__int64 *)this + 868,
                     (__int64)v19,
                     (unsigned __int64 *)&v20)
                 + 16);
  if ( !*(_BYTE *)(v7 + 25) && v8 >= *(_QWORD *)(v7 + 32) )
  {
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 0LL);
    if ( v6 >= 0 )
    {
      v9 = MEMORY[0x10];
      *(_QWORD *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                               v3,
                               (__int64)v14,
                               (unsigned __int64 *)&v20)
                + 104LL) = v9;
      v10 = (char *)this + 208;
      v11 = 10LL;
      do
      {
        if ( *((_DWORD *)v10 - 12) && a3 >= *(_QWORD *)v10 )
        {
          if ( a3 == *(_QWORD *)v10 )
          {
            if ( *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                         v3,
                                         (__int64)v14,
                                         (unsigned __int64 *)&v20)
                          + 56LL) )
              v10[244] = *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                                 v3,
                                                 (__int64)v15,
                                                 (unsigned __int64 *)&v20)
                                  + 56LL);
            v10[252] += *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                                v3,
                                                (__int64)v16,
                                                (unsigned __int64 *)&v20)
                                 + 48LL)
                      - 1;
          }
          else
          {
            *((_WORD *)v10 + 123) += *(unsigned __int8 *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                                                       v3,
                                                                       (__int64)v17,
                                                                       (unsigned __int64 *)&v20)
                                                        + 64LL);
            v10[253] += *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                                v3,
                                                (__int64)v18,
                                                (unsigned __int64 *)&v20)
                                 + 72LL);
            v12 = *(_BYTE *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget * const &,>(
                                          v3,
                                          (__int64)v19,
                                          (unsigned __int64 *)&v20)
                           + 72LL);
            if ( (unsigned __int8)v10[254] >= v12 )
              v12 = v10[254];
            v10[254] = v12;
          }
        }
        v10 += 512;
        --v11;
      }
      while ( v11 );
    }
  }
  return (unsigned int)v6;
}
