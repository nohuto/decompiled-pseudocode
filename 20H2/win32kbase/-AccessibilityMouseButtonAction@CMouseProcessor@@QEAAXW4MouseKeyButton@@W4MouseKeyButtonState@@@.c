/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01B9040
 * Callers:
 *     MouseButtonAction @ 0x1C01A9790 (MouseButtonAction.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00312B8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // dx
  __int16 v11; // ax
  _BYTE v12[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v13; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+38h] [rbp-80h]
  struct tagPOINT v15; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( (unsigned int)(v4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v14 = 0LL;
  v13 = 0LL;
  v10 = 1;
  if ( v4 != 1 )
    v10 = 4;
  v11 = 2 * v10;
  if ( a3 != 1 )
    v11 = v10;
  WORD2(v13) = v11;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v15, (__int64)&v13, 2, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v15, 0LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
}
