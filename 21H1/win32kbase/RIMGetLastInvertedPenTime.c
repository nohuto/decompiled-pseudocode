/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C015FD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_i @ 0x1C0161810 (WPP_RECORDER_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *RIMGetLastInvertedPenTime()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  Flink = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 144, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v2 = i - 1;
    if ( i == (struct _LIST_ENTRY *)16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    }
    else if ( (HIDWORD(v2[5].Flink) & 4) != 0 && v2[38].Flink > Flink )
    {
      Flink = v2[38].Flink;
    }
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_i(v4, v3, v5, 145, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, (char)Flink);
  }
  return Flink;
}
