/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C016D614
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 * Callees:
 *     RIMCloseDev @ 0x1C0022AA0 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char v6; // si
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // edi

  v4 = *(_DWORD *)(a2 + 184);
  v5 = a2;
  v6 = a1;
  if ( (v4 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *(_DWORD *)(v5 + 184);
  }
  if ( (v4 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 23, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v5 + 184) &= ~2u;
  if ( (*(_DWORD *)(v5 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        24,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6,
        v5,
        0);
    }
    return 0LL;
  }
  else
  {
    v8 = RIMCloseDev(v5);
    v10 = v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v9,
        1,
        25,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6,
        v5,
        v8);
    }
    return v10;
  }
}
