/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0026058
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00258A8 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CAC30 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C0155900 (RIMAddInputOfType.c)
 * Callees:
 *     RIMRegisterForDeviceClassNotifications @ 0x1C00237BC (RIMRegisterForDeviceClassNotifications.c)
 *     ApiSetIsRemoteConnection @ 0x1C002741C (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C0027850 (DeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0028B18 (RIMChildInputTypeIsVirtualized.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(struct _DRIVER_OBJECT **Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rsi
  void **v4; // r14
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h]

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(*((unsigned int *)Object + 21)) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !Object[15] )
  {
    return 0;
  }
  else
  {
    v3 = 0LL;
    v4 = (void **)(Object + 16);
    v5 = Object + 39;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v5 - 11) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 10, (__int64)&WPP_df94dad8867032b8c081d01056e0c1c5_Traceguids);
          }
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[v3 + 28],
                   v11,
                   *v4,
                   Object[15],
                   v12,
                   &Object[2 * (unsigned int)v3 + 31],
                   (PVOID *)&Object[v3 + 28]);
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      v4 += 4;
    }
    while ( (unsigned int)v3 <= 2 );
  }
  return (unsigned int)v2;
}
