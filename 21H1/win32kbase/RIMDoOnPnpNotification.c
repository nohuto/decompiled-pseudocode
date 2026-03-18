/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C0059D84
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017ABB0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C005A1C4 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     rimOnPnpQueryRemove @ 0x1C0175D74 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0175E94 (rimOnPnpRemoveCancelled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebp
  int v7; // esi
  int v8; // esi
  int v10; // edx
  int v11; // eax
  int v12; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = *(_DWORD *)(a2 + 184);
  v6 = 0;
  v7 = 1;
  if ( (v5 & 1) != 0 )
  {
    v8 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v8 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
    return (unsigned int)v8;
  }
  else
  {
    if ( (v5 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v5 = *(_DWORD *)(a2 + 184);
    }
    if ( (v5 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
      v5 = *(_DWORD *)(a2 + 184);
    }
    if ( (v5 & 8) != 0 )
    {
      v6 = rimOnPnpRemoveComplete(a1, a2);
      if ( v6 >= 0 )
      {
        RIMLockExclusive(a1 + 568);
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
        v11 = *(_DWORD *)(a2 + 184);
        if ( (v11 & 0x2000) == 0 && (v11 & 0x20) == 0 && *(_BYTE *)(a2 + 48) != 3 )
        {
          if ( v11 < 0 || *(_QWORD *)(a2 + 192) || (v12 = *(_DWORD *)(a2 + 188), (v12 & 1) != 0) || (v12 & 2) != 0 )
          {
            *(_DWORD *)(a2 + 200) |= 1u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v10,
                1,
                38,
                (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                a2);
            }
            v7 = 0;
          }
        }
        *(_QWORD *)(a1 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
        KeLeaveCriticalRegion();
        if ( v7 )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v6;
  }
}
