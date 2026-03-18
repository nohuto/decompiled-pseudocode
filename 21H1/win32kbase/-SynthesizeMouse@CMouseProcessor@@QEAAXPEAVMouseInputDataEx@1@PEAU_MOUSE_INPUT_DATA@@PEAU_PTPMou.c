/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808
 * Callers:
 *     SynthesizeMouseInput @ 0x1C003CE40 (SynthesizeMouseInput.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0071A84 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01B1E40 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01B1F70 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01C1110 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01C1214 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01C12BC (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01C209C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0065920 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C006994C (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C2C44 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01C4648 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3,
        struct _PTPMouseLatencyTracker *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // al
  int v11; // edx
  struct tagPOINT v12; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v13[10]; // [rsp+50h] [rbp-59h] BYREF
  _MOUSE_INPUT_DATA v14[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+27h]

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 512)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 4)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 0x8000)
    && *((_DWORD *)this + 14) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        6,
        16,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
  }
  else
  {
    if ( IsMouseIVEnabled() && isChildPartition(v9, v8) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3936));
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[9]) = 3;
    v15 = 3LL;
    HIDWORD(v15) = *(unsigned __int16 *)(*(_QWORD *)&a2 + 4LL);
    v10 = *(_BYTE *)(*(_QWORD *)&a2 + 2LL);
    memset(v14, 0, sizeof(v14));
    if ( v10 < 0 )
    {
      if ( a4 )
      {
        LODWORD(v13[9]) = 1;
        LODWORD(v15) = 1;
        v13[7] = KeQueryPerformanceCounter(0LL).QuadPart;
        v13[0] = *(_QWORD *)a4;
        v13[1] = *((_QWORD *)a4 + 1);
        v13[2] = *((_QWORD *)a4 + 2);
        v13[3] = *((_QWORD *)a4 + 3);
        v13[4] = *((_QWORD *)a4 + 4);
        v13[5] = *((_QWORD *)a4 + 5);
        v13[6] = *((_QWORD *)a4 + 6);
      }
    }
    CMouseProcessor::ProcessMouseInputData(
      this,
      &v12,
      a2,
      *(struct _MousePacketPerf **)&gptCursorAsync,
      v14,
      (const struct tagUIPI_INFO_INT *)a3,
      0LL);
    v13[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((__int64)this + 3488);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2800),
      (const struct _MousePerf *)v13);
    *((_QWORD *)this + 437) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3488, 0LL);
    KeLeaveCriticalRegion();
  }
}
