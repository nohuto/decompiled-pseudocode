/*
 * XREFs of SynthesizeMouseInputWithNextPreview @ 0x1C01B1F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C002BC80 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInputWithNextPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _PTPMouseLatencyTracker *a5,
        int a6,
        struct _MOUSE_INPUT_DATA *a7)
{
  CMouseProcessor *MouseProcessor; // rdi
  __int128 v12; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v13; // [rsp+40h] [rbp-A1h]
  __int128 v14; // [rsp+50h] [rbp-91h]
  __int64 v15; // [rsp+60h] [rbp-81h]
  __int128 v16; // [rsp+70h] [rbp-71h] BYREF
  __int64 v17; // [rsp+80h] [rbp-61h]
  struct tagPOINT v18; // [rsp+90h] [rbp-51h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v12 + 1) = a1;
    *(_QWORD *)&v14 = a3;
    *((_QWORD *)&v14 + 1) = a4;
    v15 = a4;
    *(_QWORD *)&v12 = a1 != 0 ? 3uLL : 0;
    v16 = v12;
    v17 = 0LL;
    v12 = v14;
    v13 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v18, a2, &v12, a6, (__int64)&v16, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v18, a7, a5);
  }
}
