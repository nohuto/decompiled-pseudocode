/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C00A3AEC
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00A39FC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C009D594 (WPP_RECORDER_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 *i; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v5 = (__int64)(i + 15);
    if ( i == (__int64 *)16 )
      v5 = 48LL;
    v6 = *(unsigned __int8 *)v5;
    if ( v6 == a2 || (_BYTE)v6 == 3 && a2 == 2 )
    {
      v7 = (__int64)(i + 51);
      if ( i == (__int64 *)16 )
        v7 = 336LL;
      if ( *(_QWORD *)v7 == a1 )
      {
        v8 = (__int64)(i + 32);
        if ( i == (__int64 *)16 )
          v8 = 184LL;
        if ( (*(_DWORD *)v8 & 0x10) != 0 )
        {
          v9 = (__int64)(i + 48);
          if ( i == (__int64 *)16 )
            v9 = 312LL;
          if ( !*(_QWORD *)v9 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(336LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (__int64)(i + 13);
            if ( i == (__int64 *)16 )
              v10 = 32LL;
            WPP_RECORDER_SF_qqq(
              (__int64)gRimLog,
              4u,
              1u,
              0x3Au,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              a1,
              *(_QWORD *)v10,
              *(_QWORD *)v9);
          }
          *(_DWORD *)v8 &= ~0x10u;
          v11 = (__int64)(i + 53);
          if ( i == (__int64 *)16 )
            v11 = 352LL;
          KeSetEvent(*(PRKEVENT *)v11, 1, 0);
        }
      }
    }
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
