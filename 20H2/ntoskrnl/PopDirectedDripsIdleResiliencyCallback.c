/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1408E5A94
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x14033FD68 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14037A3A8 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408FB010 (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett
  unsigned int v6; // ebx
  __int64 v7; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v5 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v5 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    PopDeepSleepSetDisengageReason(8u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24B68, 0LL);
    byte_140C24B71 = a2;
    dword_140C24B74 = a1;
    byte_140C24B78 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24B68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C24B68);
    KeAbPostRelease((ULONG_PTR)&qword_140C24B68);
    v6 = 259;
    if ( a2 )
      PopDirectedDripsUmMarkTestDevices();
  }
  else
  {
    return 0;
  }
  return v6;
}
