/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180058C00
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800271B8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180059A10 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800142A8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180014338 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180058980 (-CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18005AE3C (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DE0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800CA69C (-RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800CD368 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x180155B70 (McTemplateU0xqxxqq_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  char v5; // r15
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edx
  char v12; // al
  unsigned __int64 v13; // rcx
  int v14; // ecx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int i; // r8d
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r14d
  unsigned int j; // edi
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned __int64 v40; // r10
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned __int64 v43; // r15
  __int64 v44; // r14
  CTelemetryTouchLatencyAnalysis *v45; // rcx
  _QWORD *v46; // rdx
  signed int LastError; // eax
  __int64 v48; // rcx
  unsigned __int64 v50; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 QuadPart; // [rsp+80h] [rbp-31h] BYREF
  int v52; // [rsp+88h] [rbp-29h] BYREF
  int v53; // [rsp+8Ch] [rbp-25h]
  int v54; // [rsp+90h] [rbp-21h]
  __int64 v55; // [rsp+98h] [rbp-19h]
  __int64 v56; // [rsp+A0h] [rbp-11h]
  char v57[8]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-1h]

  v5 = 0;
  *a4 = 0;
  v9 = 0;
  if ( !*((_BYTE *)a2 + 137) )
    goto LABEL_29;
  if ( !*((_BYTE *)a2 + 142) )
  {
    v10 = *((_QWORD *)this + 629);
    if ( *(_QWORD *)(v10 + 64) - *((_QWORD *)a2 + 9) > g_qpcFrequency.QuadPart )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      if ( *((_DWORD *)a2 + 8) > *(_DWORD *)(v10 + 104) )
        goto LABEL_6;
    }
    v12 = 1;
LABEL_6:
    *((_BYTE *)a2 + 142) = v12;
    if ( v12 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 629) + 112LL);
      if ( v13 <= *((_QWORD *)a2 + 10) + 1LL )
        v13 = *((_QWORD *)a2 + 10) + 1LL;
      *((_QWORD *)a2 + 12) = v13;
      v14 = *(_DWORD *)(*((_QWORD *)this + 629) + 108LL);
      *((_DWORD *)a2 + 13) = v14;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xqxxqq_EventWriteTransfer(
          v14,
          v11,
          *(_QWORD *)a2,
          (_DWORD)a4,
          v14,
          *((_QWORD *)a2 + 12),
          v11,
          *((_DWORD *)this + 2795) != 0);
    }
  }
  if ( *((_BYTE *)a2 + 142) || a5 )
  {
    v15 = *((_QWORD *)a2 + 12);
    v16 = *((_QWORD *)a2 + 10) + 1LL;
    *((_BYTE *)a2 + 138) = 1;
    if ( v15 <= v16 )
      v15 = v16;
    *((_QWORD *)a2 + 11) = v15;
    --*((_DWORD *)this + 2794);
    if ( *(_QWORD *)a2 )
    {
      v17 = *((unsigned int *)this + 1257);
      v18 = 0LL;
      if ( (_DWORD)v17 != -1 )
        v18 = (char *)this + 304 * v17 + 152;
      v19 = *((_QWORD *)this + 629);
      v20 = *(_QWORD *)a2;
      v50 = *(_QWORD *)(v19 + 288);
      QuadPart = g_qpcFrequency.QuadPart;
      if ( *((_BYTE *)a2 + 140) && *(_BYTE *)(v19 + 140) )
      {
        v21 = *((_DWORD *)a2 + 13);
        v22 = *((_DWORD *)a2 + 12);
        if ( v21 > v22 )
        {
          if ( v18 )
          {
            v37 = *((_DWORD *)v18 + 13);
            if ( v37 )
            {
              v38 = v37 + 1;
              if ( v22 > v38 )
                v38 = *((_DWORD *)a2 + 12);
              v22 = v38;
              if ( v38 >= v21 )
                v22 = *((_DWORD *)a2 + 13);
            }
          }
          v9 = v21 - v22;
          v5 = 1;
          CScheduleStatistics::TraceGlitch(
            2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL) != 0),
            a2,
            &QuadPart,
            &v50);
          v20 = *(_QWORD *)a2;
        }
        if ( v5 )
        {
          ++dword_1803452A8;
          if ( byte_1803453F0 )
            ++dword_180345284;
          if ( byte_1803453F1 )
            ++dword_180345280;
          ++*((_QWORD *)this + 1398);
          v39 = 0;
          v40 = *(_QWORD *)a2;
          if ( *((_DWORD *)this + 1350) )
          {
            do
            {
              v41 = *(_QWORD *)(*((_QWORD *)this + 672) + 8LL * v39);
              if ( *(_QWORD *)(v41 + 56) && v40 > *(_QWORD *)(v41 + 56) )
              {
                v42 = *(_DWORD *)(v41 + 36);
                ++*(_DWORD *)(v41 + 40);
                *(_DWORD *)(v41 + 32) += v9;
                if ( v42 <= v9 )
                  v42 = v9;
                *(_DWORD *)(v41 + 36) = v42;
              }
              ++v39;
            }
            while ( v39 < *((_DWORD *)this + 1350) );
            v40 = *(_QWORD *)a2;
          }
          CTelemetryTouchLatencyAnalysis::RecordRenderGlitch(
            (CPartitionVerticalBlankScheduler *)((char *)this + 5952),
            v40,
            v9);
          v20 = *(_QWORD *)a2;
        }
      }
      for ( i = 0; i < *((_DWORD *)this + 1350); ++i )
      {
        v33 = *(_QWORD *)(*((_QWORD *)this + 672) + 8LL * i);
        if ( *(_QWORD *)(v33 + 56) && v20 >= *(_QWORD *)(v33 + 56) )
        {
          ++*(_DWORD *)(v33 + 72);
          if ( *(_QWORD *)(v33 + 88) )
          {
            v34 = *(_QWORD *)(v33 + 96);
            v35 = v15 - *(_QWORD *)(v33 + 88);
            *(_QWORD *)(v33 + 80) += v35;
            if ( v34 <= v35 )
              v34 = v35;
            *(_QWORD *)(v33 + 96) = v34;
          }
          else
          {
            *(_QWORD *)(v33 + 104) = v15;
          }
          *(_QWORD *)(v33 + 88) = v15;
        }
      }
    }
    v24 = 0;
    v25 = _InterlockedExchange64(&qword_1803453F8, 0LL);
    dword_18034526C += v25;
    dword_180345270 += HIDWORD(v25);
    if ( *((_DWORD *)a2 + 50) )
    {
      do
      {
        v43 = *(_QWORD *)a2;
        v44 = *(_QWORD *)(*((_QWORD *)a2 + 22) + 8LL * v24);
        v45 = *(CTelemetryTouchLatencyAnalysis **)(v44 + 80);
        if ( v45 )
        {
          CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
            v45,
            *(_QWORD *)v44,
            *(_QWORD *)(v44 + 8),
            *(_QWORD *)(v44 + 16),
            *(_QWORD *)(v44 + 24),
            *(_QWORD *)(v44 + 32),
            *((_QWORD *)a2 + 10),
            *((_QWORD *)a2 + 12),
            *(_QWORD *)((char *)this + 5068),
            *(_DWORD *)(v44 + 64),
            *(_DWORD *)(v44 + 68),
            *(_DWORD *)(v44 + 72),
            v43,
            (const struct CTelemetryTouchLatencyAnalysis::VAIL_TELEMETRY_TOUCH_INFO *)(v44 + 40));
          CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
            *(CTelemetryTouchLatencyAnalysis **)(v44 + 80),
            *(_QWORD *)v44,
            v43);
          *(_QWORD *)(v44 + 80) = 0LL;
        }
        ++v24;
      }
      while ( v24 < *((_DWORD *)a2 + 50) );
    }
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v57, a2);
    v26 = 0;
    while ( v26 < *((_DWORD *)this + 1350) )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 672) + 8LL * v26) + 64LL);
      if ( v36 && v58 >= v36 )
        CAnimationTracking::StopAnalyzingAnimationScenario(
          (CPartitionVerticalBlankScheduler *)((char *)this + 5376),
          v26,
          (const struct CAnimationTracking::TelFrameInfo *)v57);
      else
        ++v26;
    }
    v9 = 0;
    v27 = *((_QWORD *)a2 + 3);
    if ( a5 )
    {
      if ( v27 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6));
    }
    else
    {
      v52 = *((_DWORD *)a2 + 8);
      v53 = *((_DWORD *)a2 + 13);
      v54 = v53;
      v55 = *((_QWORD *)a2 + 12);
      v56 = 0LL;
      if ( v27 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 6) + 32LL))(
                *((_QWORD *)this + 6),
                v27,
                &v52);
        v9 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x6CAu, 0LL);
          return v9;
        }
      }
      v30 = 0;
      if ( *((_DWORD *)a2 + 42) )
      {
        while ( 1 )
        {
          SetLastError(0);
          v46 = *(_QWORD **)(*((_QWORD *)a2 + 18) + 8LL * v30);
          if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v46, v46 + 1) )
            break;
          if ( ++v30 >= *((_DWORD *)a2 + 42) )
            goto LABEL_28;
        }
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0x5Fu, 0LL);
      }
    }
LABEL_28:
    *((_DWORD *)this + 1257) = a3;
    CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(this);
  }
LABEL_29:
  if ( *((_BYTE *)a2 + 138) || !*((_BYTE *)a2 + 137) )
  {
    for ( j = 0; j < *((_DWORD *)a2 + 58); ++j )
    {
      v48 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8LL * j);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
    }
    *((_DWORD *)a2 + 58) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)a2 + 208, 8LL);
    *a4 = 1;
  }
  return v9;
}
