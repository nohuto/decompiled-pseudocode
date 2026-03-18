/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x1C004BB88
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void rimScheduleUserModeRimPnpRegistration()
{
  __int64 v0; // rcx
  struct _LIST_ENTRY *i; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 62, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !BYTE1(i[4].Flink) && !LOBYTE(i[4].Flink) && LOBYTE(i[23].Blink) )
    {
      if ( LODWORD(i[53].Flink) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v0);
      if ( (HIDWORD(i[4].Flink) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v0);
      ZwSetEvent(i[23].Flink, 0LL);
    }
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 63, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
}
