/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125BB8
 * Callers:
 *     PowerConnectionEvent @ 0x1C005966C (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125714 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSetSystemInputMode @ 0x1C00C9880 (RIMSetSystemInputMode.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1)
{
  int v1; // ebx
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  v1 = a1;
  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v1 == 2 )
  {
    dword_1C02531B4 = 0;
    dword_1C02531B8 = 1;
    _InterlockedOr((volatile signed __int32 *)gpsi, 0x4000u);
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFDFFF);
    goto LABEL_6;
  }
  dword_1C02531B8 = 0;
  dword_1C02531B4 = v1 == 1;
  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFBFFF);
  if ( v1 != 1 )
    goto LABEL_5;
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(v1);
  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( v1 )
    v4 = (v1 != 1) + 1;
  else
    v4 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
