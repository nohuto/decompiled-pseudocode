/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C002384C
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C002394C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0075D64 (WPP_RECORDER_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *i; // rbx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx

  RIMLockExclusive(&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v8 = (__int64)(i + 15);
    if ( i == (__int64 *)16 )
      v8 = 48LL;
    v9 = *(unsigned __int8 *)v8;
    if ( v9 == a2 || (_BYTE)v9 == 3 && a2 == 2 )
    {
      v10 = (__int64)(i + 51);
      if ( i == (__int64 *)16 )
        v10 = 336LL;
      if ( *(_QWORD *)v10 == a1 )
      {
        v11 = (__int64)(i + 32);
        if ( i == (__int64 *)16 )
          v11 = 184LL;
        if ( (*(_DWORD *)v11 & 0x10) != 0 )
        {
          v12 = (__int64)(i + 48);
          if ( i == (__int64 *)16 )
            v12 = 312LL;
          if ( !*(_QWORD *)v12 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(336LL, v4, v5, v6);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = (__int64)(i + 13);
            LOBYTE(v4) = 4;
            if ( i == (__int64 *)16 )
              v13 = 32LL;
            WPP_RECORDER_SF_qqq(
              (_DWORD)gRimLog,
              v4,
              1,
              58,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              a1,
              *(_QWORD *)v13,
              *(_QWORD *)v12);
          }
          *(_DWORD *)v11 &= ~0x10u;
          v14 = (__int64)(i + 53);
          if ( i == (__int64 *)16 )
            v14 = 352LL;
          KeSetEvent(*(PRKEVENT *)v14, 1, 0);
        }
      }
    }
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
