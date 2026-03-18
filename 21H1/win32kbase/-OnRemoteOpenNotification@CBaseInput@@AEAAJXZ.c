/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CA330
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C00387EC (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // r9
  int v7; // ebx
  int v9; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v5 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
      goto LABEL_12;
    }
    v6 = ghRemoteKeyboardChannel;
  }
  else
  {
    v6 = ghRemoteMouseChannel;
  }
  if ( v6 != -1 )
  {
    if ( v6 )
    {
      v7 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
             *((_QWORD *)this + 1),
             (unsigned int)&DestinationString,
             v2,
             v6,
             0,
             0LL);
      if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v9,
          3,
          13,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          v7);
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
    return (unsigned int)v7;
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
      v5);
  }
  return (unsigned int)-1073741816;
}
