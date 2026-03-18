/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C00258A8
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0026058 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(_DWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 64, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( Object[216] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  v6 = RIMDiscoverDevicesOfInputType(Object);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v6;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 65, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 66, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  return (unsigned int)v6;
}
