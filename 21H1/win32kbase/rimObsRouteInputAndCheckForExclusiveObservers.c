/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01859EC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1C0183EFC (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C0183F38 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY *i; // rdi
  int v10; // ebp
  struct _KPROCESS *v11; // rsi
  int v12; // edx
  struct _LIST_ENTRY *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int Blink; // eax
  int v18; // r14d
  struct _KPROCESS *v19; // rbp
  int v20; // edx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    if ( Flink == &gObRimInputObserverList )
      goto LABEL_9;
    v5 = (__int64)&Flink[-1];
    if ( ((__int64)Flink[6].Blink & 2) != 0 )
    {
      if ( (unsigned int)rimObsIsObserverTarget_0(&Flink[-1], a1) )
        break;
    }
LABEL_7:
    Flink = Flink->Flink;
  }
  if ( !(unsigned int)rimObsIsRegisteredObserverAllowed(v6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        23,
        46,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    goto LABEL_7;
  }
  v4 = Flink - 1;
  if ( Flink == (struct _LIST_ENTRY *)16 )
  {
LABEL_9:
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      v13 = i - 1;
      if ( (unsigned int)rimObsIsObserverTarget_0(&i[-1], a1) )
      {
        if ( (unsigned int)rimObsIsRegisteredObserverAllowed(v14) )
        {
          Blink = (int)v13[7].Blink;
          v18 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (Blink & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v15,
              23,
              50,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
          }
          v19 = (struct _KPROCESS *)v13[2].Flink;
          if ( v19 != (struct _KPROCESS *)PsGetCurrentProcess(v16, v15) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v20,
                23,
                51,
                (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
              v19 = (struct _KPROCESS *)v13[2].Flink;
            }
            KeStackAttachProcess(v19, &ApcState);
            v18 = 1;
          }
          rimObsDeliverInputToObserver(a1, (__int64)&i[-1]);
          if ( v18 )
            KeUnstackDetachProcess(&ApcState);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v15,
            23,
            52,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        }
      }
    }
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v5 + 120) & 1) != 0 )
  {
    v10 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        23,
        47,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v11 = *(struct _KPROCESS **)(v5 + 32);
    if ( v11 != (struct _KPROCESS *)PsGetCurrentProcess(v8, v7) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          23,
          48,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        v11 = *(struct _KPROCESS **)(v5 + 32);
      }
      KeStackAttachProcess(v11, &ApcState);
      v10 = 1;
    }
    rimObsDeliverInputToObserver(a1, v5);
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      23,
      49,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
  InputTraceLogging::RIM::DropInput(a1);
LABEL_37:
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0256338 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
