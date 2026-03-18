/*
 * XREFs of SynthesizeMouseInput @ 0x1C004A020
 * Callers:
 *     <none>
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A230 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _PTPMouseLatencyTracker *a6)
{
  CMouseProcessor *MouseProcessor; // rdi
  __int128 v11; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v12; // [rsp+40h] [rbp-99h]
  __int128 v13; // [rsp+50h] [rbp-89h]
  __int64 v14; // [rsp+60h] [rbp-79h]
  __int128 v15; // [rsp+70h] [rbp-69h] BYREF
  __int64 v16; // [rsp+80h] [rbp-59h]
  struct tagPOINT v17; // [rsp+90h] [rbp-49h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 0LL, a4);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v11 + 1) = a1;
    *(_QWORD *)&v13 = a3;
    *((_QWORD *)&v13 + 1) = a4;
    v14 = a4;
    *(_QWORD *)&v11 = a1 != 0 ? 3uLL : 0;
    v15 = v11;
    v16 = 0LL;
    v11 = v13;
    v12 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v17, a2, &v11, a5, (__int64)&v15, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v17, 0LL, a6);
  }
}
