/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1408DE9F4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x14035CE78 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x1403776F8 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F4110 (PopDirectedDripsUmMarkTestDevices.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C24CA8, 0LL);
    byte_140C24CB1 = a2;
    dword_140C24CB4 = a1;
    byte_140C24CB8 = 0;
    PopQueueDirectedDripsWork(v7, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C24CA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C24CA8);
    KeAbPostRelease((ULONG_PTR)&qword_140C24CA8);
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
