/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00569D0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C005A3DC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  unsigned int v4; // eax
  int v5; // edx
  unsigned int v6; // edi

  v2 = a2;
  v3 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        30,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v3,
        v2,
        0);
    }
    return 0LL;
  }
  else
  {
    v4 = RIMCloseDev(v2);
    v6 = v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v5,
        1,
        31,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v3,
        v2,
        v4);
    }
    return v6;
  }
}
