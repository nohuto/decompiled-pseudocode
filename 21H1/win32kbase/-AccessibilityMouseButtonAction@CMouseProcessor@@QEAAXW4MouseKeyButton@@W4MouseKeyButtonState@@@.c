/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01C1110
 * Callers:
 *     MouseButtonAction @ 0x1C01B1870 (MouseButtonAction.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0062C68 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 v6; // rcx
  __int16 v7; // dx
  __int16 v8; // ax
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v10; // [rsp+28h] [rbp-90h] BYREF
  __int64 v11; // [rsp+38h] [rbp-80h]
  struct tagPOINT v12; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( (unsigned int)(v4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v11 = 0LL;
  v10 = 0LL;
  v7 = 1;
  if ( v4 != 1 )
    v7 = 4;
  v8 = 2 * v7;
  if ( a3 != 1 )
    v8 = v7;
  WORD2(v10) = v8;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v12, (__int64)&v10, 2, 256);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v12, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
}
