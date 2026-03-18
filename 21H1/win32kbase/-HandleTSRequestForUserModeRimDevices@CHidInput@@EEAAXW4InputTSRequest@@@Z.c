/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0050E10
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00A4228 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00A42B0 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CBCC0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
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
