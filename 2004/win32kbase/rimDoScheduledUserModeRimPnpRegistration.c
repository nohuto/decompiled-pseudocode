/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C00AF520
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(
        struct _DRIVER_OBJECT **Object,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edx
  int v6; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 64, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( *((_DWORD *)Object + 216) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3, a4);
  if ( (*((_DWORD *)Object + 21) & 0x20) == 0 )
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
