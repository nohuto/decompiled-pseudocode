/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C015B940
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rsi
  _UNKNOWN **result; // rax

  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3, a4);
  *(_QWORD *)(a1 + 496) = a2;
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 504) = v6 + 250;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_Dd(
                          (__int64)gRimLog,
                          4u,
                          1u,
                          0xAu,
                          (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                          a2,
                          *(_DWORD *)(a1 + 500));
  return result;
}
