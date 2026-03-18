/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C015C170
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015CD90 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C015C134 (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  int v6; // edx

  if ( !gDeviceArbitrationType )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 504) )
    {
      rimAbRemoveGlobalPenDeadzone(a1, a2, a3, a4);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (_DWORD)gRimLog,
                              v6,
                              1,
                              11,
                              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
  }
  return result;
}
