/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00AF2D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00AF310 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00AF398 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CB780 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
      }
      else
      {
        return RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      return RIMDirectPnpRemoveUserModeRimDevices();
    }
  }
  return result;
}
