/*
 * XREFs of PopDirectedDripsNotify @ 0x14077B738
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x14077B698 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14077B6F4 (PopReleaseTransitionLock.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopDripsWatchdogCallbackHandler @ 0x1408EB9C8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F5400 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037843C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1403784A4 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x140378508 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x140563404 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x1408E0168 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsSendSessionData @ 0x1408E0324 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x1408F3D2C (PopDirectedDripsDiagNotifySessionStart.c)
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
        dword_140C24A3C = 0;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
        qword_140C24BD0 = *(_QWORD *)a2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24A48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C24A48);
        KeAbPostRelease((ULONG_PTR)&qword_140C24A48);
        PopDirectedDripsQueryMitigationStatus(&v20, 0LL, 0LL);
        LOBYTE(HandleAttributes) = PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v20);
        return HandleAttributes;
      }
      v12 = a1 - 1;
      if ( !v12 )
      {
        v15 = *(_QWORD *)a2;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
        *(_DWORD *)(v15 + 200) = dword_140C24A3C;
        qword_140C24BD0 = 0LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24A48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C24A48);
        KeAbPostRelease((ULONG_PTR)&qword_140C24A48);
        LOBYTE(HandleAttributes) = PopDirectedDripsSendSessionData();
        return HandleAttributes;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_23:
        dword_140C249F4 = 0;
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
    if ( qword_140C24BD0 == *(_QWORD *)a2 )
    {
      if ( dword_140C24BD8 )
      {
        _m_prefetchw(&PopDirectedDripsState);
        v17 = v16 | PopDirectedDripsState.HandleAttributes;
        if ( (v16 & _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, v16)) != v16 || dword_140C249F4 )
          PopQueueDirectedDripsWork(v17, 0x800uLL);
      }
    }
    v11 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24A48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
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
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
        if ( ++dword_140C24A88 == 1 )
          PopDirectedDripsSetDisengageReason(1);
        goto LABEL_11;
      }
      if ( v9 == 1 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
        if ( !--dword_140C24A88 )
          PopDirectedDripsClearDisengageReason(1);
LABEL_11:
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24A48, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v10 & 2) == 0 )
        {
LABEL_12:
          LOBYTE(HandleAttributes) = KeAbPostRelease((ULONG_PTR)&qword_140C24A48);
          return HandleAttributes;
        }
        v11 = (v10 & 4) == 0;
LABEL_37:
        if ( v11 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C24A48);
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
        LOBYTE(HandleAttributes) = PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C249F8, 0LL);
    }
  }
  else
  {
    LOBYTE(HandleAttributes) = PopDirectedDripsEngage(v7, *a2, v4);
  }
  return HandleAttributes;
}
