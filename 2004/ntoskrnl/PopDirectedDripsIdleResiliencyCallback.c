/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1408DFC54
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408ECC3C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402DED68 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x140378508 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F5400 (PopDirectedDripsUmMarkTestDevices.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24A48, 0LL);
    byte_140C24A51 = a2;
    dword_140C24A54 = a1;
    byte_140C24A58 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24A48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C24A48);
    KeAbPostRelease((ULONG_PTR)&qword_140C24A48);
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
