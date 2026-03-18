/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C005A1C4
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C0056BCC (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C009E5D0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RIMCloseDev @ 0x1C005A3DC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  char v4; // si
  unsigned int v5; // eax
  int v6; // edx
  void *v7; // rcx
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  int v10; // eax
  void *v11; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  v4 = a1;
  if ( (v2 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 26, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~8u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        27,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v4,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v5 = RIMCloseDev(v3);
    v7 = *(void **)(v3 + 248);
    v8 = v5;
    if ( v7 )
    {
      v9 = IoUnregisterPlugPlayNotification(v7);
      *(_QWORD *)(v3 + 248) = 0LL;
      v8 = v9;
      v10 = *(_DWORD *)(v3 + 184);
      *(_DWORD *)(v3 + 200) &= ~0x20u;
      v11 = *(void **)(v3 + 32);
      *(_DWORD *)(v3 + 184) = v10 & 0xFFFFFB7F | 0x400;
      ObfDereferenceObject(v11);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v6,
        1,
        28,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v4,
        v3,
        v8);
    }
    return v8;
  }
}
