/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C016FB64
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char v6; // si
  unsigned int v7; // edi
  void *v9; // rcx
  NTSTATUS v10; // eax
  void *v11; // rcx

  v4 = *(_DWORD *)(a2 + 184);
  v5 = a2;
  v6 = a1;
  if ( (v4 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *(_DWORD *)(v5 + 184);
  }
  if ( (v4 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 32, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  }
  *(_DWORD *)(v5 + 184) &= ~4u;
  if ( (*(_DWORD *)(v5 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        33,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6,
        v5,
        0);
    }
    return 0LL;
  }
  else
  {
    v9 = *(void **)(v5 + 248);
    if ( v9 )
    {
      v10 = IoUnregisterPlugPlayNotification(v9);
      v11 = *(void **)(v5 + 32);
      v7 = v10;
      *(_QWORD *)(v5 + 248) = 0LL;
      ObfDereferenceObject(v11);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        34,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6,
        v5,
        v7);
    }
    return v7;
  }
}
