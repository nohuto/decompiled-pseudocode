/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C001A450
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C00168C8 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v5; // si
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // edi

  v4 = a2;
  v5 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  if ( (*(_DWORD *)(v4 + 184) & 0x40) != 0 )
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
        v5,
        v4,
        0);
    }
    return 0LL;
  }
  else
  {
    v6 = RIMCloseDev(v4);
    v8 = v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v7,
        1,
        31,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v5,
        v4,
        v6);
    }
    return v8;
  }
}
