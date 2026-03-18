/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C002E988 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0051710 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00A8868 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01A9060 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C0077560 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 PtiFromInputDest; // rax
  __int64 v6; // rbx
  bool v7; // di
  int v9; // edx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2LL, a3, a4);
  v6 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v7 = CheckAccessEx((int *)&v10, (int *)(*(_QWORD *)(PtiFromInputDest + 424) + 880LL), 0);
  if ( !v7 )
  {
    EtwTraceUIPIInputError(
      gptiCurrent,
      (struct tagTHREADINFO *)v6,
      *(_QWORD *)(v6 + 432),
      *(_QWORD *)(*(_QWORD *)(v6 + 432) + 428LL),
      1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        6,
        10,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
  }
  return v7;
}
