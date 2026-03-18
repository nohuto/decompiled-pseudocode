/*
 * XREFs of PopDirectedDripsNotify @ 0x140811764
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14099613C (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F0A0 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsClearDisengageReason @ 0x1402500D4 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14025013C (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1402501A0 (PopQueueDirectedDripsWork.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsEngage @ 0x1405C9C94 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsSendSessionData @ 0x1408063DC (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x140809458 (PopDirectedDripsQueryMitigationStatus.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x14080953C (PopDirectedDripsDiagNotifySessionStart.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotify(int a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // ett
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // ett
  int v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) == 0 )
    return result;
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
        dword_140C240BC = 0;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
        qword_140C24250 = *a2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C240C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C240C8);
        KeAbPostRelease((ULONG_PTR)&qword_140C240C8);
        PopDirectedDripsQueryMitigationStatus(&v18, 0LL, 0LL);
        return PopDirectedDripsDiagNotifySessionStart(*a2, v18);
      }
      v10 = a1 - 1;
      if ( !v10 )
      {
        v11 = *a2;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
        *(_DWORD *)(v11 + 208) = dword_140C240BC;
        qword_140C24250 = 0LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C240C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C240C8);
        KeAbPostRelease((ULONG_PTR)&qword_140C240C8);
        return PopDirectedDripsSendSessionData(v12);
      }
      v13 = v10 - 1;
      if ( !v13 )
      {
LABEL_29:
        dword_140C24074 = 0;
        return result;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          return result;
        goto LABEL_29;
      }
    }
    v15 = v6 | 0x1000;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
    if ( qword_140C24250 == *a2 )
    {
      if ( dword_140C24258 )
      {
        _m_prefetchw(&PopDirectedDripsState);
        v16 = v15 | PopDirectedDripsState.HandleAttributes;
        if ( (v15 & _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, v15)) != v15 || dword_140C24074 )
          PopQueueDirectedDripsWork(v16, 0x800uLL);
      }
    }
LABEL_18:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C240C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C240C8);
    return KeAbPostRelease((ULONG_PTR)&qword_140C240C8);
  }
  v7 = (unsigned int)(a1 - 6);
  if ( !(_DWORD)v7 )
    return PopDirectedDripsEngage(v7, *(_BYTE *)a2, v4);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return result;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
      if ( !--dword_140C24108 )
        PopDirectedDripsClearDisengageReason(1);
    }
    else
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C240C8, 0LL);
      if ( ++dword_140C24108 == 1 )
        PopDirectedDripsSetDisengageReason(1);
    }
    goto LABEL_18;
  }
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v17 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v17 != (_DWORD)result );
  if ( (result & 0x800) != 0 )
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C24078, 0LL);
  return result;
}
