/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01C1214
 * Callers:
 *     MouseMove @ 0x1C01B18B0 (MouseMove.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0062C68 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, int a2, unsigned int a3)
{
  __int128 v6; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+30h] [rbp-88h]
  struct tagPOINT v8; // [rsp+40h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v6 = 0LL;
  HIDWORD(v6) = a2;
  v7 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v8, (__int64)&v6, 1, 256);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v8, 0LL, 0LL);
}
