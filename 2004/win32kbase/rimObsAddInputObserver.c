/*
 * XREFs of rimObsAddInputObserver @ 0x1C017E6F4
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C0156210 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0157E10 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C001A524 (WPP_RECORDER_SF_DDDD.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0054770 (rimConvertUserToKernelEventHandle.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0168598 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C01686F4 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C017E070 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  unsigned int v9; // r13d
  char v10; // cl
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  int v14; // r9d
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  PVOID v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // r9d
  _QWORD *v24; // rdx
  int v25; // edx
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+10h]
  unsigned int PreviousMode; // [rsp+B8h] [rbp+20h]

  PreviousMode = a4;
  v29 = a2;
  v9 = a4;
  v10 = a8;
  if ( !a8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
    v10 = 0;
  }
  v11 = a7;
  v12 = a6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDD(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      59,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a5,
      a6,
      a7,
      v10);
  if ( v29 < 0x30 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        60,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 61;
LABEL_26:
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        v14,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        62,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !a7 || !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 63;
        goto LABEL_26;
      }
      return 3221225485LL;
    }
    if ( a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 64;
        goto LABEL_26;
      }
      return 3221225485LL;
    }
  }
  else
  {
    v12 = 0;
    v11 = 0;
  }
  RIMLockExclusive((__int64)&gInputObserverLock);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v12, v11) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v15 = RawInputManagerInputObserverObjectCreate(v9, v16, v17, v9, &Handle);
    KeLeaveCriticalRegion();
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 69;
    }
    else
    {
      Object = 0LL;
      v15 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v18, v9, &Object);
      if ( v15 >= 0 )
      {
        v19 = Object;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            4u,
            0x17u,
            0x41u,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
            Handle,
            Object);
        *((_DWORD *)v19 + 18) = PreviousMode;
        *((_QWORD *)v19 + 12) = a1;
        *((_DWORD *)v19 + 26) = v29;
        *((_DWORD *)v19 + 27) = a5;
        *((_DWORD *)v19 + 28) = v12;
        *((_DWORD *)v19 + 29) = v11;
        *((_DWORD *)v19 + 30) = a8;
        v15 = rimConvertUserToKernelEventHandle(a3, (void **)v19 + 10);
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v20,
              23,
              67,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
          }
        }
        else
        {
          LOBYTE(v20) = 1;
          v21 = rimObsStartStopDeviceRead(v19, v20);
          v15 = v21;
          if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 3;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v22,
              23,
              66,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v21);
          }
        }
        ObfDereferenceObject(v19);
        v9 = PreviousMode;
        goto LABEL_47;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        if ( v15 < 0 )
        {
          if ( Handle != (HANDLE)-1LL )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 3;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v18,
                23,
                71,
                (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
            }
            ObCloseHandle(Handle, PreviousMode);
          }
        }
        else if ( v9 )
        {
          v24 = a9;
          if ( (unsigned __int64)a9 >= MmUserProbeAddress )
            v24 = (_QWORD *)MmUserProbeAddress;
          *v24 = Handle;
        }
        else
        {
          *a9 = Handle;
        }
        goto LABEL_58;
      }
      v23 = 68;
    }
    LOBYTE(v18) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      23,
      v23,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    goto LABEL_47;
  }
  v15 = -1073741823;
LABEL_58:
  qword_1C02503A8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      23,
      72,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
