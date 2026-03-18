/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0056998
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00472D0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006B618 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01AB3E0 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C00ADBA0 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 PtiFromInputDest; // rax
  struct tagTHREADINFO *v6; // rbx
  char v7; // di
  int v9; // edx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  if ( !*a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  v6 = (struct tagTHREADINFO *)PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v7 = CheckAccessEx(&v10, *(_QWORD *)(PtiFromInputDest + 416) + 880LL, 0LL);
  if ( !v7 )
  {
    EtwTraceUIPIInputError(gptiCurrent, v6, 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        6,
        10,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
  }
  return v7;
}
