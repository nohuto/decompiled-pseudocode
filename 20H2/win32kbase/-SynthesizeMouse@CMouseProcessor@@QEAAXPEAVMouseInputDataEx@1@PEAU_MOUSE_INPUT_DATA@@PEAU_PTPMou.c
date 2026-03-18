/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0054F94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInput @ 0x1C00AB2C0 (SynthesizeMouseInput.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01A9D60 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01A9E90 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01B9040 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01B9144 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01B91EC (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01B9FCC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0035694 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0036C88 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01BAB74 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BC554 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3,
        struct _PTPMouseLatencyTracker *a4)
{
  char v8; // al
  int v9; // edx
  _BYTE v10[16]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v11[10]; // [rsp+50h] [rbp-59h] BYREF
  _MOUSE_INPUT_DATA v12[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+27h]

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
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
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        6,
        16,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3864));
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[9]) = 3;
    v13 = 3LL;
    HIDWORD(v13) = *(unsigned __int16 *)(*(_QWORD *)&a2 + 4LL);
    v8 = *(_BYTE *)(*(_QWORD *)&a2 + 2LL);
    memset(v12, 0, sizeof(v12));
    if ( v8 < 0 )
    {
      if ( a4 )
      {
        LODWORD(v11[9]) = 1;
        LODWORD(v13) = 1;
        v11[7] = KeQueryPerformanceCounter(0LL).QuadPart;
        v11[0] = *(_QWORD *)a4;
        v11[1] = *((_QWORD *)a4 + 1);
        v11[2] = *((_QWORD *)a4 + 2);
        v11[3] = *((_QWORD *)a4 + 3);
        v11[4] = *((_QWORD *)a4 + 4);
        v11[5] = *((_QWORD *)a4 + 5);
        v11[6] = *((_QWORD *)a4 + 6);
      }
    }
    CMouseProcessor::ProcessMouseInputData(
      this,
      (struct CMouseProcessor::MouseInputDataEx *)v10,
      a2,
      *(struct _MousePacketPerf **)&gptCursorAsync,
      v12,
      (const struct tagUIPI_INFO_INT *)a3);
    v11[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((char *)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2800),
      (const struct _MousePerf *)v11);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
  }
}
