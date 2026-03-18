/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01B91EC
 * Callers:
 *     ReleaseMouseButton @ 0x1C01A9A10 (ReleaseMouseButton.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00312B8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v10; // [rsp+28h] [rbp-90h] BYREF
  __int64 v11; // [rsp+38h] [rbp-80h]
  struct tagPOINT v12; // [rsp+40h] [rbp-78h] BYREF

  v2 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v11 = 0LL;
  v10 = 0LL;
  v8 = v2 & 1;
  if ( (v2 & 1) != 0 )
    WORD2(v10) = 2;
  LOWORD(v5) = (_DWORD)v8 != 0 ? 2 : 0;
  if ( (v2 & 2) != 0 )
  {
    v8 = (unsigned int)-(int)v8;
    LOWORD(v5) = (_DWORD)v8 != 0 ? 10 : 8;
    WORD2(v10) = v5;
  }
  if ( !(_WORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, 2LL, v7);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v12, (__int64)&v10, 3, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v12, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
}
