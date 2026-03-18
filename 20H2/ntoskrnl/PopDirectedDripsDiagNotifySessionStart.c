/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x1408F993C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140789D38 (PopDirectedDripsNotify.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall PopDirectedDripsDiagNotifySessionStart(__int64 a1, int a2)
{
  ULONG HandleAttributes; // eax
  ULONG v5; // ett

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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    qword_140C1E8A0 = a1;
    dword_140C1E8A8 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    LOBYTE(HandleAttributes) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return HandleAttributes;
}
