/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C002443C
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0025AD0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C007574C (RIMRemoveDevOfInputType.c)
 * Callees:
 *     RIMCloseDev @ 0x1C0022AA0 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char v6; // si
  unsigned int v7; // eax
  int v8; // edx
  void *v9; // rcx
  unsigned int v10; // edi
  NTSTATUS v11; // eax
  int v12; // eax
  void *v13; // rcx

  v4 = *(_DWORD *)(a2 + 184);
  v5 = a2;
  v6 = a1;
  if ( (v4 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *(_DWORD *)(v5 + 184);
  }
  if ( (v4 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 26, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v5 + 184) &= ~8u;
  if ( (*(_DWORD *)(v5 + 184) & 0x40) != 0 )
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
        v6,
        v5,
        0);
    }
    return 0LL;
  }
  else
  {
    v7 = RIMCloseDev(v5);
    v9 = *(void **)(v5 + 248);
    v10 = v7;
    if ( v9 )
    {
      v11 = IoUnregisterPlugPlayNotification(v9);
      *(_QWORD *)(v5 + 248) = 0LL;
      v10 = v11;
      v12 = *(_DWORD *)(v5 + 184);
      *(_DWORD *)(v5 + 200) &= ~0x20u;
      v13 = *(void **)(v5 + 32);
      *(_DWORD *)(v5 + 184) = v12 & 0xFFFFFB7F | 0x400;
      ObfDereferenceObject(v13);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v8,
        1,
        28,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6,
        v5,
        v10);
    }
    return v10;
  }
}
