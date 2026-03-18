/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     IsPTPInputEnabled @ 0x1C0122BD8 (IsPTPInputEnabled.c)
 *     RIMIsInputSuppressed @ 0x1C01687B8 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0168B3C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C01CADCC (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetGetPenArbitrationType @ 0x1C01CB70C (ApiSetGetPenArbitrationType.c)
 *     ApiSetProcessHidRawInput @ 0x1C01CC850 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // edx
  char result; // al
  int v7; // edx
  int v8; // r9d
  int v9; // r8d
  unsigned int PenArbitrationType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( (unsigned int)RIMIsInputSuppressed(a2) )
    return InputTraceLogging::RIM::DropInput(a2);
  v4 = *(_QWORD *)(a2 + 480);
  if ( (unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v4) )
  {
    v7 = *(_DWORD *)(v4 + 24);
    if ( v7 != 7 || (unsigned int)IsPTPInputEnabled() )
    {
      if ( (unsigned int)(v7 - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
      {
        if ( *(_DWORD *)(v4 + 156) )
        {
          if ( !*(_DWORD *)(a1 + 464) )
          {
            PenArbitrationType = ApiSetGetPenArbitrationType();
            if ( PenArbitrationType < 4 )
              gDeviceArbitrationType = PenArbitrationType;
            if ( gDeviceArbitrationType >= 4u )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
          }
          result = rimDoProcessAnyPointerDeviceInput(a1, a2);
          goto LABEL_26;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 13, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 12, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v7 + 4;
      v9 = v7 - 6;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, v9, v8, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 10, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  result = InputTraceLogging::RIM::DropInput(a2);
LABEL_26:
  if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
    return ApiSetProcessHidRawInput(a2);
  return result;
}
