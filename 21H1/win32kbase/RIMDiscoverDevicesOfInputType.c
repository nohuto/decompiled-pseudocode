/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C009EE88
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C009E3A0 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB340 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C015E1B0 (RIMAddInputOfType.c)
 * Callees:
 *     RIMRegisterForDeviceClassNotifications @ 0x1C004BCA4 (RIMRegisterForDeviceClassNotifications.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C009E37C (RIMChildInputTypeIsVirtualized.c)
 *     ApiSetIsRemoteConnection @ 0x1C00A160C (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C00A1B00 (DeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(struct _DRIVER_OBJECT **Object, __int64 a2)
{
  NTSTATUS v3; // edi
  __int64 v4; // rsi
  void **v5; // r14
  _QWORD *v6; // rbp
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v3 = -1073741811;
  if ( RIMChildInputTypeIsVirtualized(*((unsigned int *)Object + 21), a2) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !Object[15] )
  {
    return 0;
  }
  else
  {
    v4 = 0LL;
    v5 = (void **)(Object + 16);
    v6 = Object + 39;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v4) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v6 - 11) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_df94dad8867032b8c081d01056e0c1c5_Traceguids);
          }
        }
        else
        {
          if ( !*v6 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
          v3 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v3 >= 0 )
          {
            v3 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[v4 + 28],
                   v10,
                   *v5,
                   Object[15],
                   v11,
                   &Object[2 * (unsigned int)v4 + 31],
                   (PVOID *)&Object[v4 + 28]);
            if ( v3 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v4 = (unsigned int)(v4 + 1);
      ++v6;
      v5 += 4;
    }
    while ( (unsigned int)v4 <= 2 );
  }
  return (unsigned int)v3;
}
