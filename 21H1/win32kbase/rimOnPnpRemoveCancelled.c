/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C0175E94
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v5; // edi
  void *v7; // rcx
  NTSTATUS v8; // eax
  void *v9; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_DWORD *)(v3 + 184);
  }
  if ( (v2 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 32, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v3 + 184) &= ~4u;
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        (__int64)gRimLog,
        4u,
        1u,
        0x21u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        0);
    return 0LL;
  }
  else
  {
    v7 = *(void **)(v3 + 248);
    if ( v7 )
    {
      v8 = IoUnregisterPlugPlayNotification(v7);
      v9 = *(void **)(v3 + 32);
      v5 = v8;
      *(_QWORD *)(v3 + 248) = 0LL;
      ObfDereferenceObject(v9);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        (__int64)gRimLog,
        4u,
        1u,
        0x22u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        v3,
        v5);
    return v5;
  }
}
