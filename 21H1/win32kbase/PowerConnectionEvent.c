/*
 * XREFs of PowerConnectionEvent @ 0x1C005966C
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 *     SetConnectedState @ 0x1C0056AB0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C0057490 (SetConnectCompletedState.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005AF20 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125BB8 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 OutputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a1;
  OutputBuffer = 0LL;
  v1 = gbConnected != 0;
  if ( dword_1C02511B4 != v1 )
  {
    dword_1C02511B4 = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      15LL);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, &InputBuffer, 2u, &OutputBuffer, 8u) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
}
