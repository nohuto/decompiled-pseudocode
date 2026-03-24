/*
 * XREFs of PopDirectedDripsNotify @ 0x14078DB18
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x14078DA78 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14078DAD4 (PopReleaseTransitionLock.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE04C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE7F0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopDripsWatchdogCallbackHandler @ 0x1408EEDD8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F87B8 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A4DC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A544 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14037A5A8 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x1405688B4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3608 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x1408E37A8 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsSendSessionData @ 0x1408E3964 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x1408F711C (PopDirectedDripsDiagNotifySessionStart.c)
 */

char __fastcall PopDirectedDripsNotify(int a1, char *a2)
{
  ULONG HandleAttributes; // eax
  __int64 v4; // r8
  ULONG v5; // ett
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  char v10; // al
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  ULONG v18; // ett
  unsigned int v20; // [rsp+40h] [rbp+18h] BYREF

  v20 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = HandleAttributes;
    v5 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v5 != HandleAttributes );
  if ( (HandleAttributes & 1) == 0 )
    return HandleAttributes;
  v6 = 0;
  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
    {
      v6 = 0x2000;
    }
    else
    {
      if ( !a1 )
      {
        dword_140C24C9C = 0;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
        qword_140C24E30 = *(_QWORD *)a2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24CA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C24CA8);
        KeAbPostRelease((ULONG_PTR)&qword_140C24CA8);
        PopDirectedDripsQueryMitigationStatus(&v20, 0LL, 0LL);
        LOBYTE(HandleAttributes) = PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v20);
        return HandleAttributes;
      }
      v12 = a1 - 1;
      if ( !v12 )
      {
        v15 = *(_QWORD *)a2;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
        *(_DWORD *)(v15 + 200) = dword_140C24C9C;
        qword_140C24E30 = 0LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24CA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C24CA8);
        KeAbPostRelease((ULONG_PTR)&qword_140C24CA8);
        LOBYTE(HandleAttributes) = PopDirectedDripsSendSessionData();
        return HandleAttributes;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_23:
        dword_140C24C54 = 0;
        return HandleAttributes;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          return HandleAttributes;
        goto LABEL_23;
      }
    }
    v16 = v6 | 0x1000;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
    if ( qword_140C24E30 == *(_QWORD *)a2 )
    {
      if ( dword_140C24E38 )
      {
        _m_prefetchw(&PopDirectedDripsState);
        v17 = v16 | PopDirectedDripsState.HandleAttributes;
        if ( (v16 & _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, v16)) != v16 || dword_140C24C54 )
          PopQueueDirectedDripsWork(v17, 0x800uLL);
      }
    }
    v11 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24CA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
    goto LABEL_37;
  }
  v7 = (unsigned int)(a1 - 6);
  if ( (_DWORD)v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
        if ( ++dword_140C24CE8 == 1 )
          PopDirectedDripsSetDisengageReason(1);
        goto LABEL_11;
      }
      if ( v9 == 1 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
        if ( !--dword_140C24CE8 )
          PopDirectedDripsClearDisengageReason(1);
LABEL_11:
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24CA8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v10 & 2) == 0 )
        {
LABEL_12:
          LOBYTE(HandleAttributes) = KeAbPostRelease((ULONG_PTR)&qword_140C24CA8);
          return HandleAttributes;
        }
        v11 = (v10 & 4) == 0;
LABEL_37:
        if ( v11 )
          ExfTryToWakePushLock(&qword_140C24CA8);
        goto LABEL_12;
      }
    }
    else
    {
      _m_prefetchw(&PopDirectedDripsState);
      HandleAttributes = PopDirectedDripsState.HandleAttributes;
      do
      {
        v18 = HandleAttributes;
        HandleAttributes = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             HandleAttributes,
                             HandleAttributes);
      }
      while ( v18 != HandleAttributes );
      if ( (HandleAttributes & 0x800) != 0 )
        LOBYTE(HandleAttributes) = PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C24C58, 0LL);
    }
  }
  else
  {
    LOBYTE(HandleAttributes) = PopDirectedDripsEngage(v7, *a2, v4);
  }
  return HandleAttributes;
}
