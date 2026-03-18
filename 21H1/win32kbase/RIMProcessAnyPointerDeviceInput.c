/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C017F7AC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     IsPTPInputEnabled @ 0x1C0128BB8 (IsPTPInputEnabled.c)
 *     RIMIsInputSuppressed @ 0x1C016EB08 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C01D0D4C (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetGetPenArbitrationType @ 0x1C01D168C (ApiSetGetPenArbitrationType.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D27D0 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rcx

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
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
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
