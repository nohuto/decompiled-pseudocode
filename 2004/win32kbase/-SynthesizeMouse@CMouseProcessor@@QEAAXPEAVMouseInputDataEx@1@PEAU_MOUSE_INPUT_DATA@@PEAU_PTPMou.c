/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254
 * Callers:
 *     SynthesizeMouseInput @ 0x1C004A020 (SynthesizeMouseInput.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00749C4 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AC0E0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01AC210 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01BB3B0 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01BB4B4 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01BB55C (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BC33C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0070220 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0070398 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0071500 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01BCEE4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BE8CC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3,
        struct _PTPMouseLatencyTracker *a4)
{
  __int64 v8; // rcx
  char v9; // al
  int v10; // edx
  _BYTE v11[16]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v12[10]; // [rsp+50h] [rbp-59h] BYREF
  _MOUSE_INPUT_DATA v13[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+27h]

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a2,
                          512LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           4LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           0x8000LL)
    && *((_DWORD *)this + 14) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v10,
        6,
        16,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isChildPartition(v8) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3864));
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[9]) = 3;
    v14 = 3LL;
    HIDWORD(v14) = *(unsigned __int16 *)(*(_QWORD *)&a2 + 4LL);
    v9 = *(_BYTE *)(*(_QWORD *)&a2 + 2LL);
    memset(v13, 0, sizeof(v13));
    if ( v9 < 0 )
    {
      if ( a4 )
      {
        LODWORD(v12[9]) = 1;
        LODWORD(v14) = 1;
        v12[7] = KeQueryPerformanceCounter(0LL).QuadPart;
        v12[0] = *(_QWORD *)a4;
        v12[1] = *((_QWORD *)a4 + 1);
        v12[2] = *((_QWORD *)a4 + 2);
        v12[3] = *((_QWORD *)a4 + 3);
        v12[4] = *((_QWORD *)a4 + 4);
        v12[5] = *((_QWORD *)a4 + 5);
        v12[6] = *((_QWORD *)a4 + 6);
      }
    }
    CMouseProcessor::ProcessMouseInputData(
      this,
      (struct CMouseProcessor::MouseInputDataEx *)v11,
      a2,
      *(struct _MousePacketPerf **)&gptCursorAsync,
      v13,
      (const struct tagUIPI_INFO_INT *)a3);
    v12[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((char *)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2800),
      (const struct _MousePerf *)v12);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
  }
}
