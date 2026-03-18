/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00AF520 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CBAD0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C0157E60 (RIMAddInputOfType.c)
 * Callees:
 *     RIMRegisterForDeviceClassNotifications @ 0x1C00599F4 (RIMRegisterForDeviceClassNotifications.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ApiSetIsRemoteConnection @ 0x1C00AAADC (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(struct _DRIVER_OBJECT **Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  __int64 v5; // rsi
  void **v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-28h]

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(*((unsigned int *)Object + 21)) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection(v4, v3) || !Object[15] )
  {
    return 0;
  }
  else
  {
    v5 = 0LL;
    v6 = (void **)(Object + 16);
    v7 = Object + 39;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v5) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v7 - 11) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 10, (__int64)&WPP_df94dad8867032b8c081d01056e0c1c5_Traceguids);
          }
        }
        else
        {
          if ( !*v7 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[v5 + 28],
                   v13,
                   *v6,
                   Object[15],
                   v14,
                   &Object[2 * (unsigned int)v5 + 31],
                   (PVOID *)&Object[v5 + 28]);
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v5 = (unsigned int)(v5 + 1);
      ++v7;
      v6 += 4;
    }
    while ( (unsigned int)v5 <= 2 );
  }
  return (unsigned int)v2;
}
