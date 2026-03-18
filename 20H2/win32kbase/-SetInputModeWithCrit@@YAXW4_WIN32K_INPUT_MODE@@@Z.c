/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011D8D8
 * Callers:
 *     PowerConnectionEvent @ 0x1C00B842C (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011D434 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSetSystemInputMode @ 0x1C00C88B0 (RIMSetSystemInputMode.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v4 = a1;
  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v4 == 2 )
  {
    dword_1C024B1B4 = 0;
    dword_1C024B1B8 = 1;
    _InterlockedOr((volatile signed __int32 *)gpsi, 0x4000u);
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFDFFF);
    goto LABEL_6;
  }
  dword_1C024B1B8 = 0;
  dword_1C024B1B4 = v4 == 1;
  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFBFFF);
  if ( v4 != 1 )
    goto LABEL_5;
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(v4);
  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( v4 )
    v7 = (v4 != 1) + 1;
  else
    v7 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
