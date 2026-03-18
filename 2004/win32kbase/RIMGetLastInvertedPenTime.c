/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C0159A00
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C015B4C0 (WPP_RECORDER_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *RIMGetLastInvertedPenTime()
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v5; // rcx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  Flink = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 144, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v5 = i - 1;
    if ( i == (struct _LIST_ENTRY *)16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v1, v2, v3);
    }
    else if ( (HIDWORD(v5[5].Flink) & 4) != 0 && v5[38].Flink > Flink )
    {
      Flink = v5[38].Flink;
    }
  }
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_i(v7, v6, v8, 145, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, (char)Flink);
  }
  return Flink;
}
