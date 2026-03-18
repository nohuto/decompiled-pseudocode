/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C005FB00 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01B1140 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C009FEB0 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2)
{
  __int64 PtiFromInputDest; // rax
  struct tagTHREADINFO *v4; // rbx
  char v5; // di
  int v7; // edx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  v4 = (struct tagTHREADINFO *)PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v5 = CheckAccessEx(&v8, *(_QWORD *)(PtiFromInputDest + 416) + 880LL, 0LL);
  if ( !v5 )
  {
    EtwTraceUIPIInputError(gptiCurrent, v4, 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        10,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
  }
  return v5;
}
