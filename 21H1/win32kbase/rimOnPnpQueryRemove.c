/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C0175D74
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C005A3DC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 23, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~2u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        (__int64)gRimLog,
        4u,
        1u,
        0x18u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        0);
    return 0LL;
  }
  else
  {
    v6 = RIMCloseDev(v3);
    v7 = v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        (__int64)gRimLog,
        4u,
        1u,
        0x19u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        v6);
    return v7;
  }
}
