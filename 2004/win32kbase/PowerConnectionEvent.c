/*
 * XREFs of PowerConnectionEvent @ 0x1C006148C
 * Callers:
 *     SetConnectedState @ 0x1C0061400 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C0061430 (SetConnectCompletedState.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00616A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011FC28 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 OutputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a1;
  OutputBuffer = 0LL;
  v1 = gbConnected != 0;
  if ( dword_1C024B1B4 != v1 )
  {
    dword_1C024B1B4 = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      15LL);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, &InputBuffer, 2u, &OutputBuffer, 8u) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      giPowerOffTimeOutMs = 1000 * HIDWORD(OutputBuffer);
      if ( gSystemIsAoAc )
        SetInputModeWithCrit(0LL);
    }
    else
    {
      if ( HIDWORD(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
}
