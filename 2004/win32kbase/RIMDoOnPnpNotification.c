/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C0015E90
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0174880 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C00166B0 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     rimOnPnpQueryRemove @ 0x1C016FA44 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C016FB64 (rimOnPnpRemoveCancelled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // esi
  int v15; // edx
  int v16; // eax
  int v17; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v10 = *(_DWORD *)(a2 + 184);
  v11 = 0;
  v12 = 1;
  if ( (v10 & 1) != 0 )
  {
    v13 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v13 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
    return (unsigned int)v13;
  }
  else
  {
    if ( (v10 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v10 = *(_DWORD *)(a2 + 184);
    }
    if ( (v10 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
      v10 = *(_DWORD *)(a2 + 184);
    }
    if ( (v10 & 8) != 0 )
    {
      v11 = rimOnPnpRemoveComplete(a1, a2);
      if ( v11 >= 0 )
      {
        RIMLockExclusive(a1 + 568);
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
        v16 = *(_DWORD *)(a2 + 184);
        if ( (v16 & 0x2000) == 0 && (v16 & 0x20) == 0 && *(_BYTE *)(a2 + 48) != 3 )
        {
          if ( v16 < 0 || *(_QWORD *)(a2 + 192) || (v17 = *(_DWORD *)(a2 + 188), (v17 & 1) != 0) || (v17 & 2) != 0 )
          {
            *(_DWORD *)(a2 + 200) |= 1u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v15,
                1,
                38,
                (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                a2);
            }
            v12 = 0;
          }
        }
        *(_QWORD *)(a1 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
        KeLeaveCriticalRegion();
        if ( v12 )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v11;
  }
}
