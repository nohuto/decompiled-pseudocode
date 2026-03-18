/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C009E3A0
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C009EE88 (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(_DWORD *Object)
{
  int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 64, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  if ( Object[216] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object);
  v2 = RIMDiscoverDevicesOfInputType(Object);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 65, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 66, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  return (unsigned int)v2;
}
