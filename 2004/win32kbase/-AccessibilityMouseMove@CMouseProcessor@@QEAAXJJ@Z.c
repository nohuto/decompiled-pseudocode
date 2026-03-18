/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01BB4B4
 * Callers:
 *     MouseMove @ 0x1C01ABB50 (MouseMove.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C006CC98 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  __int128 v7; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+30h] [rbp-88h]
  struct tagPOINT v9; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v7 = 0LL;
  HIDWORD(v7) = v5;
  v8 = v4;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)&v7, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v9, 0LL, 0LL);
}
