/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x1408F3D2C
 * Callers:
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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
    qword_140C1E920 = a1;
    dword_140C1E928 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    LOBYTE(HandleAttributes) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return HandleAttributes;
}
