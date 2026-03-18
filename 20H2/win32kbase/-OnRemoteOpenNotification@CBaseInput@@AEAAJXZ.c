/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB300
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C002375C (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // r9
  int v9; // ebx
  int v11; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v7 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
      goto LABEL_12;
    }
    v8 = ghRemoteKeyboardChannel;
  }
  else
  {
    v8 = ghRemoteMouseChannel;
  }
  if ( v8 != -1 )
  {
    if ( v8 )
    {
      v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
             *((_QWORD *)this + 1),
             (unsigned int)&DestinationString,
             v2,
             v8,
             0,
             0LL);
      if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v11,
          3,
          13,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          v9);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v3,
          3,
          12,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
      }
      return 0;
    }
    return (unsigned int)v9;
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v3,
      3,
      11,
      (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
      v7);
  }
  return (unsigned int)-1073741816;
}
