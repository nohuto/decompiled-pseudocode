/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007BF7C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z @ 0x18001AA44 (-UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x180078B9C (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     ?IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z @ 0x180079228 (-IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180079298 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180079420 (-CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18007CB0C (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_KI@Z @ 0x1800D7FFC (-RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_KI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x1801123E4 (McTemplateU0xqxxqq_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@PEAVIVailRenderTarget@@@?$vector@PEAVIVailRenderTarget@@V?$allocator@PEAVIVailRenderTarget@@@std@@@std@@QEAAPEAPEAVIVailRenderTarget@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18019A184 (--$_Emplace_reallocate@PEAVIVailRenderTarget@@@-$vector@PEAVIVailRenderTarget@@V-$allocator@PEAV.c)
 *     ?OnRenderTargetRetirement@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVIVailRenderTarget@@_K@Z @ 0x1801D5648 (-OnRenderTargetRetirement@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEAVI.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  bool *v5; // rsi
  int v6; // r15d
  struct CFrameInfo *v7; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // r8d
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  struct IVailRenderTarget **v26; // rsi
  struct IVailRenderTarget **v27; // r14
  __int64 v28; // rcx
  __int64 *v29; // r12
  __int64 *i; // r15
  __int64 v31; // r12
  struct IVailRenderTarget **j; // r15
  unsigned int v33; // esi
  __int64 v34; // rax
  unsigned int v35; // esi
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v43; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 QuadPart; // [rsp+58h] [rbp-19h] BYREF
  __int64 v46; // [rsp+60h] [rbp-11h] BYREF
  bool *v47; // [rsp+68h] [rbp-9h]
  __int128 v48; // [rsp+70h] [rbp-1h] BYREF
  struct IVailRenderTarget **v49; // [rsp+80h] [rbp+Fh]

  v47 = a4;
  *a4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*((_BYTE *)a2 + 153) )
    goto LABEL_37;
  if ( !*((_BYTE *)a2 + 158) )
  {
    v9 = *((_QWORD *)this + 564);
    if ( *(_QWORD *)(v9 + 64) - *((_QWORD *)a2 + 9) > g_qpcFrequency.QuadPart )
    {
      LOBYTE(a2) = 1;
    }
    else
    {
      LOBYTE(a2) = 0;
      if ( *((_DWORD *)v7 + 8) > *(_DWORD *)(v9 + 104) )
      {
        *((_BYTE *)v7 + 158) = 0;
        goto LABEL_45;
      }
    }
    *((_BYTE *)v7 + 158) = 1;
    v10 = *(_QWORD *)(*((_QWORD *)this + 564) + 112LL);
    if ( v10 <= *((_QWORD *)v7 + 10) + 1LL )
      v10 = *((_QWORD *)v7 + 10) + 1LL;
    *((_QWORD *)v7 + 12) = v10;
    v11 = *(_DWORD *)(*((_QWORD *)this + 564) + 108LL);
    *((_DWORD *)v7 + 13) = v11;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xqxxqq_EventWriteTransfer(
        *(unsigned __int8 *)(*((_QWORD *)this + 564) + 240LL),
        (_DWORD)a2,
        *(_QWORD *)v7,
        v11,
        v11,
        v10,
        (char)a2,
        *(_BYTE *)(*((_QWORD *)this + 564) + 240LL));
      if ( !*((_BYTE *)v7 + 158) )
      {
LABEL_45:
        if ( !a5 )
          goto LABEL_37;
      }
    }
  }
  v12 = *((_QWORD *)v7 + 12);
  v13 = *((_QWORD *)v7 + 10) + 1LL;
  *((_BYTE *)v7 + 158) = 1;
  *((_BYTE *)v7 + 154) = 1;
  if ( v12 <= v13 )
    v12 = v13;
  *((_QWORD *)v7 + 11) = v12;
  if ( *(_QWORD *)v7 )
  {
    v14 = *((unsigned int *)this + 1127);
    v15 = 0LL;
    if ( (_DWORD)v14 != -1 )
      v15 = (char *)this + 272 * v14 + 144;
    v16 = *((_QWORD *)this + 564);
    v17 = *(_QWORD *)v7;
    v44 = *(_QWORD *)(v16 + 256);
    QuadPart = g_qpcFrequency.QuadPart;
    if ( *((_BYTE *)v7 + 156) )
    {
      if ( *(_BYTE *)(v16 + 156) )
      {
        v18 = *((_DWORD *)v7 + 13);
        v19 = *((_DWORD *)v7 + 12);
        if ( v18 > v19 )
        {
          if ( v15 )
          {
            v20 = *((_DWORD *)v15 + 13);
            if ( v20 )
            {
              v21 = v20 + 1;
              if ( v19 > v21 )
                v21 = *((_DWORD *)v7 + 12);
              v19 = v21;
              if ( v21 >= v18 )
                v19 = *((_DWORD *)v7 + 13);
            }
          }
          v22 = v18 - v19;
          CScheduleStatistics::TraceGlitch(
            2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) != 0),
            v7,
            &QuadPart,
            &v44);
          ++dword_1803D3178;
          if ( byte_1803D32D8 )
            ++dword_1803D3154;
          if ( byte_1803D32D9 )
            ++dword_1803D3150;
          ++*((_QWORD *)this + 1559);
          v23 = 0;
          v24 = *(_QWORD *)v7;
          if ( *((_DWORD *)this + 1222) )
          {
            do
            {
              v39 = *(_QWORD *)(*((_QWORD *)this + 608) + 8LL * v23);
              if ( *(_QWORD *)(v39 + 56) && v24 > *(_QWORD *)(v39 + 56) )
              {
                v40 = *(_DWORD *)(v39 + 36);
                ++*(_DWORD *)(v39 + 40);
                *(_DWORD *)(v39 + 32) += v22;
                if ( v40 <= v22 )
                  v40 = v22;
                *(_DWORD *)(v39 + 36) = v40;
              }
              ++v23;
            }
            while ( v23 < *((_DWORD *)this + 1222) );
            v24 = *(_QWORD *)v7;
          }
          InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RecordRenderGlitch(
            (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
            v24,
            v22);
          v17 = *(_QWORD *)v7;
        }
      }
    }
    CAnimationTracking::IncrementFrameCounts((CPartitionVerticalBlankScheduler *)((char *)this + 4864), v17, v12);
    v25 = *((_QWORD *)this + 8);
    v48 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v49 = 0LL;
    v28 = *(_QWORD *)(v25 + 216);
    v29 = *(__int64 **)(v28 + 16);
    for ( i = *(__int64 **)(v28 + 8); i != v29; ++i )
    {
      v37 = *i;
      v43 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v37, &GUID_813c29c9_c423_4bba_a41c_de7fd4c7b061, &v43) >= 0 )
      {
        v46 = v43;
        if ( v26 == v27 )
        {
          std::vector<IVailRenderTarget *>::_Emplace_reallocate<IVailRenderTarget *>(&v48, v26, &v46);
          v27 = v49;
          v26 = (struct IVailRenderTarget **)*((_QWORD *)&v48 + 1);
        }
        else
        {
          *v26++ = (struct IVailRenderTarget *)v43;
          *((_QWORD *)&v48 + 1) = v26;
        }
      }
      if ( v43 )
      {
        v41 = *(int *)(*(_QWORD *)(v43 + 8) + 4LL) + v43 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    v31 = v48;
    for ( j = (struct IVailRenderTarget **)v48; j != v26; ++j )
      InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetRetirement(
        (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
        *j,
        *(_QWORD *)v7);
    if ( v31 )
      std::_Deallocate<16,0>(v31, ((unsigned __int64)v27 - v31) & 0xFFFFFFFFFFFFFFF8uLL);
    v6 = a3;
  }
  v33 = 0;
  v34 = _InterlockedExchange64(&qword_1803D3AF8, 0LL);
  dword_1803D313C += v34;
  dword_1803D3140 += HIDWORD(v34);
  if ( *((_DWORD *)v7 + 46) )
  {
    do
      InteractionLatencyTelemetry::TouchUpdateInfo::UpdateScenarioLatency(
        *(InteractionLatencyTelemetry::TouchUpdateInfo **)(*((_QWORD *)v7 + 20) + 8LL * v33++),
        *(_QWORD *)((char *)this + 4548),
        *((_QWORD *)v7 + 10),
        *((_QWORD *)v7 + 12),
        *(_QWORD *)v7);
    while ( v33 < *((_DWORD *)v7 + 46) );
  }
  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)&v48, v7);
  v35 = 0;
  while ( v35 < *((_DWORD *)this + 1222) )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 608) + 8LL * v35) + 64LL);
    if ( v38 && *((_QWORD *)&v48 + 1) >= v38 )
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CPartitionVerticalBlankScheduler *)((char *)this + 4864),
        v35,
        (const struct CAnimationTracking::TelFrameInfo *)&v48);
    else
      ++v35;
  }
  *((_DWORD *)this + 1127) = v6;
  CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(this);
  v5 = v47;
LABEL_37:
  if ( *((_BYTE *)v7 + 154) || !*((_BYTE *)v7 + 153) )
  {
    CFrameInfo::ReleaseResponses(v7);
    *v5 = 1;
  }
  return 0LL;
}
