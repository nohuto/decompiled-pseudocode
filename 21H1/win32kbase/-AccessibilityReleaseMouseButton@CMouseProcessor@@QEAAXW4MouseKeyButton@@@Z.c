/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01C12BC
 * Callers:
 *     ReleaseMouseButton @ 0x1C01B1AF0 (ReleaseMouseButton.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0062C68 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // edx
  _BYTE v6[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  struct tagPOINT v9; // [rsp+40h] [rbp-78h] BYREF

  v2 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v8 = 0LL;
  v7 = 0LL;
  v5 = v2 & 1;
  if ( (v2 & 1) != 0 )
    WORD2(v7) = 2;
  LOWORD(v4) = v5 != 0 ? 2 : 0;
  if ( (v2 & 2) != 0 )
  {
    LOWORD(v4) = v5 != 0 ? 10 : 8;
    WORD2(v7) = v4;
  }
  if ( !(_WORD)v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v9, (__int64)&v7, 3, 256);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v9, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
}
