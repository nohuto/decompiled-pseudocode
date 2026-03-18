/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K@Z @ 0x180013AA8 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x180078900 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z.c)
 *     ?RetireScenariosIfOverdueOrLastFrameUnpresented@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180078994 (-RetireScenariosIfOverdueOrLastFrameUnpresented@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078D88 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180079298 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x180079FC8 (-FrameStarted@CTelemetryFrames@@SAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007A258 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007A584 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A840 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801D7980 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x1801D7BCC (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x18026BBF0 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18026BE1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  char *v1; // rbx
  __int64 v3; // r14
  bool v4; // dl
  int FrameStart; // eax
  __int64 v6; // rcx
  int v7; // esi
  int updated; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebx
  ULONGLONG v18; // rax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+D0h] [rbp-48h] BYREF

  v1 = (char *)this + 12488;
  v3 = 0LL;
  if ( *((_BYTE *)this + 12496) && *((_BYTE *)this + 12497) )
  {
    v18 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 12488));
    v28.Ptr = v18;
    if ( v1[10] )
    {
      if ( *(_DWORD *)v1 == -1 )
      {
        *(_QWORD *)v1 = 0LL;
        v19 = 0;
      }
      else
      {
        v19 = *((_DWORD *)v1 + 1);
      }
      *((_QWORD *)v1 + 4) = v18;
      *(_OWORD *)&v1[16 * v19 + 40] = *(_OWORD *)(v1 + 24);
      v20 = *(_DWORD *)v1;
      v21 = *((_DWORD *)v1 + 1);
      if ( *(_DWORD *)v1 != v21 )
      {
        v22 = *(_DWORD *)v1;
        do
        {
          v23 = *(_QWORD *)&v1[16 * v22 + 40];
          if ( v23 >= *((_QWORD *)v1 + 4) - 10000000LL )
            break;
          *((_QWORD *)v1 + 2) += v23 - *(_QWORD *)&v1[16 * v22 + 48];
          *(_QWORD *)&v1[16 * v22 + 48] = 0LL;
          *(_QWORD *)&v1[16 * v22 + 40] = 0LL;
          v20 = (unsigned __int8)(*(_DWORD *)v1 + 1);
          *(_DWORD *)v1 = v20;
          v22 = v20;
          v21 = *((_DWORD *)v1 + 1);
        }
        while ( v20 != v21 );
      }
      v24 = *((_QWORD *)v1 + 2) + *(_QWORD *)&v1[16 * v21 + 48] - *(_QWORD *)&v1[16 * v21 + 40];
      v25 = (unsigned __int8)(v21 + 1);
      *((_QWORD *)v1 + 2) = v24;
      *((_DWORD *)v1 + 1) = v25;
      if ( v20 == v25 )
      {
        v26 = 2LL * v20;
        *((_QWORD *)v1 + 2) = *(_QWORD *)&v1[16 * v20 + 40] + v24 - *(_QWORD *)&v1[16 * v20 + 48];
        *(_QWORD *)&v1[8 * v26 + 48] = 0LL;
        *(_QWORD *)&v1[8 * v26 + 40] = 0LL;
        *(_DWORD *)v1 = (unsigned __int8)(*v1 + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v1, &v28.Ptr);
  }
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this, v4);
  v7 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, FrameStart, 0x1F8u);
  }
  else
  {
    if ( v1[8] )
    {
      *(_WORD *)(v1 + 9) = 1;
      *((_QWORD *)v1 + 4) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 3) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v1);
    }
    CTelemetryFrames::FrameStarted();
    v3 = *((_QWORD *)this + 564);
    updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, updated, 0x1FFu);
    }
    else
    {
      CPartitionVerticalBlankScheduler::ProcessFrame(this);
      v10 = *((_QWORD *)this + 564);
      if ( *(_BYTE *)(v10 + 153) || *(_BYTE *)(v10 + 155) )
        CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
    }
  }
  v11 = *((_QWORD *)g_pComposition + 27);
  if ( !*(_BYTE *)(v11 + 581) || *(_BYTE *)(v11 + 582) )
  {
    v12 = 0;
  }
  else
  {
    dword_1803D3160 |= 0x200u;
    v12 = 1;
  }
  if ( *((_DWORD *)this + 1222) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)&v28, 0LL);
    CAnimationTracking::RetireScenariosIfOverdueOrLastFrameUnpresented(
      (CPartitionVerticalBlankScheduler *)((char *)this + 4864),
      (const struct CAnimationTracking::TelFrameInfo *)&v28);
  }
  if ( *((_DWORD *)this + 1360) )
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(
      (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
      **((_QWORD **)this + 564));
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17), 4LL);
  v16 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x226u);
  if ( !v7 || v7 >= 0 && v16 < 0 )
    v7 = v16;
  if ( !v12 && (*((_DWORD *)this + 1222) || *((_DWORD *)this + 1360)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)this, 0x3E8u, 0x40000u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v15,
      1u,
      &v28);
  if ( v3 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v3 + 153), *(_BYTE *)(v3 + 240), *(_QWORD *)(v3 + 80));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      v15,
      1u,
      &v28);
  if ( v7 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v7, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v7;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v7);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v7;
}
