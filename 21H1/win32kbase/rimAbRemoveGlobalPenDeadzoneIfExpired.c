/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01624C0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0162484 (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  if ( !gDeviceArbitrationType )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 504) )
    {
      rimAbRemoveGlobalPenDeadzone(a1);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (_DWORD)gRimLog,
                              v3,
                              1,
                              11,
                              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
  }
  return result;
}
