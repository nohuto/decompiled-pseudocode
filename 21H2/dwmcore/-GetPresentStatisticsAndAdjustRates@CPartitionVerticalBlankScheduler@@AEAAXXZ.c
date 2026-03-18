/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x180079568 (-Update@-$LinearFitT@$0BAA@@@QEAA_N_J0@Z.c)
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x1800796C4 (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 *     ?SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z @ 0x180079DA0 (-SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z.c)
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x180079DE0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 *     ?UpdateDXRefresh@CAnimationTracking@@QEAAXI@Z @ 0x180079E04 (-UpdateDXRefresh@CAnimationTracking@@QEAAXI@Z.c)
 *     ?UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXI@Z @ 0x180079E44 (-UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180079F40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1800DDBEC (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     floor @ 0x1801018EC (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180111D6E (McTemplateU0xx_EventWriteTransfer.c)
 *     ?ComputeAverage@?$LinearFitT@$0BAA@@@QEBANXZ @ 0x1801121A6 (-ComputeAverage@-$LinearFitT@$0BAA@@@QEBANXZ.c)
 *     McTemplateU0xxxiid_EventWriteTransfer @ 0x1801124A8 (McTemplateU0xxxiid_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v7; // r8
  struct IMonitorTarget *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // r14
  double v19; // xmm6_8
  __int64 v20; // rax
  __int64 v21; // rcx
  double v22; // xmm0_8
  int v23; // r15d
  __int64 v24; // rcx
  char v25; // bl
  __int64 v26; // r12
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  double v29; // xmm0_8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rax
  double v32; // xmm0_8
  char v33; // r8
  int v34; // r9d
  int v35; // r10d
  double v36; // xmm0_8
  double v37; // xmm4_8
  int v38; // eax
  double v39; // xmm5_8
  double v40; // xmm0_8
  int v41; // ecx
  __int64 v42; // rdx
  int v43; // r8d
  struct CFrameInfo *v44; // rdx
  __int128 v45; // [rsp+40h] [rbp-68h] BYREF
  __int128 v46; // [rsp+50h] [rbp-58h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-40h] BYREF

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start,
      a3,
      1u,
      &v48);
  v4 = *((_QWORD *)this + 565);
  v5 = *((_QWORD *)this + 564);
  *(_OWORD *)(v5 + 104) = *(_OWORD *)(v4 + 104);
  *(_OWORD *)(v5 + 120) = *(_OWORD *)(v4 + 120);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(v4 + 136);
  *(_BYTE *)(v5 + 156) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v8 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, __int128 *))(*(_QWORD *)PrimaryMonitorTarget + 144LL))(
           PrimaryMonitorTarget,
           &v45);
    if ( v9 >= 0 )
    {
      if ( v9 != 142213121 )
      {
        v11 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v8 + 112LL))(v8);
        v12 = *((_QWORD *)this + 564);
        v13 = v11;
        *(_OWORD *)(v12 + 104) = v45;
        *(_OWORD *)(v12 + 120) = v46;
        *(_QWORD *)(v12 + 136) = v47;
        *(_BYTE *)(v12 + 156) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
          1u,
          v14,
          v15);
        v18 = *((_QWORD *)&v46 + 1);
        if ( *((_BYTE *)this + 4856) && v13 )
        {
          if ( v13 < 0 )
            v19 = (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1))
                + (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1));
          else
            v19 = (double)(int)v13;
          v20 = *((_QWORD *)this + 2151);
          if ( *(double *)(v20 + 32) != v19 )
          {
            *(double *)(v20 + 32) = v19;
            LinearFitT<256>::Reset(*((_QWORD *)this + 2151));
            v18 = *((_QWORD *)&v46 + 1);
          }
          v21 = *((_QWORD *)this + 565);
          if ( *(_BYTE *)(v21 + 156)
            && (unsigned int)(int)((double)((int)v18 - *(_DWORD *)(v21 + 128)) / v19 + 0.5) >= 5uLL )
          {
            LinearFitT<256>::Reset(*((_QWORD *)this + 2151));
            v18 = *((_QWORD *)&v46 + 1);
          }
          v22 = (double)(int)v18 / v19 + 0.5;
          v23 = (int)v22;
          LinearFitT<256>::Update(*((_QWORD *)this + 2151), (unsigned int)(int)v22, v18);
          v25 = Microsoft_Windows_Dwm_CoreEnableBits;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
          {
            McTemplateU0xx_EventWriteTransfer(
              v24,
              &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_UPDATE,
              (unsigned int)(int)v22,
              *((_QWORD *)&v46 + 1));
            v25 = Microsoft_Windows_Dwm_CoreEnableBits;
          }
          v26 = *((_QWORD *)this + 2151);
          v18 = (unsigned int)(int)floor(
                                     (double)(v23 - *(_DWORD *)(v26 + 40)) * *(double *)(v26 + 24)
                                   + (double)(int)*(_QWORD *)(v26 + 48)
                                   + *(double *)(v26 + 16)
                                   + 0.5);
          if ( (v25 & 1) != 0 )
          {
            v28 = 0LL;
            v29 = (double)SDWORD2(v46) / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
            if ( v29 >= 9.223372036854776e18 )
            {
              v29 = v29 - 9.223372036854776e18;
              if ( v29 < 9.223372036854776e18 )
                v28 = 0x8000000000000000uLL;
            }
            v30 = v28 + (unsigned int)(int)v29;
            v31 = 0LL;
            v32 = (double)(int)v18 / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
            if ( v32 >= 9.223372036854776e18 )
            {
              v32 = v32 - 9.223372036854776e18;
              if ( v32 < 9.223372036854776e18 )
                v31 = 0x8000000000000000uLL;
            }
            v36 = LinearFitT<256>::ComputeAverage(v26, v27, v31 + (unsigned int)(int)v32, v30);
            v38 = 0;
            v40 = v36 / v37 * v39;
            if ( v40 >= 9.223372036854776e18 )
            {
              v40 = v40 - 9.223372036854776e18;
              if ( v40 < 9.223372036854776e18 )
                v38 = v35;
            }
            v41 = 256;
            if ( *(_DWORD *)(v26 + 8) < 0x100u )
              v41 = *(_DWORD *)(v26 + 8);
            McTemplateU0xxxiid_EventWriteTransfer(v41, v38 + (int)v40, v23, v34, v33, v33 - v34, v38 + (int)v40, v41);
          }
        }
        *(_QWORD *)(*((_QWORD *)this + 564) + 144LL) = v18;
        CRateInfo::SetNominalRefreshPeriod((CRateInfo *)(*((_QWORD *)this + 564) + 248LL), v13, v16, v17);
        CScheduleFrameInfoVolatileData::TracePresentStats(*((CScheduleFrameInfoVolatileData **)this + 564), v42, v43);
        v44 = (struct CFrameInfo *)*((_QWORD *)this + 565);
        if ( *((_BYTE *)v44 + 156) && !*((_BYTE *)this + 4852) )
          CRateInfo::CalculateEffectiveRefreshRate(
            (CRateInfo *)(*((_QWORD *)this + 564) + 248LL),
            v44,
            *((struct CFrameInfo **)this + 564));
        CAnimationTracking::UpdateDXRefresh(
          (CPartitionVerticalBlankScheduler *)((char *)this + 4864),
          *(_DWORD *)(*((_QWORD *)this + 564) + 120LL));
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateDXRefresh(
          (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
          *(_DWORD *)(*((_QWORD *)this + 564) + 120LL));
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180345A78, 3LL, v9, 0x2CDu);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop,
      v7,
      1u,
      &v48);
}
