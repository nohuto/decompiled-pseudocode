/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14099E908
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14098C1E4 (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x14099E7DC (PopDirectedDripsDiagInsertErrorRecord.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(__int64 a1)
{
  __int64 v2; // rdi
  PVOID *i; // rbx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
    *(_DWORD *)(v2 + 152) |= 0x20u;
  for ( i = (PVOID *)PopDirectedDripsDiagSessionContext; i != &PopDirectedDripsDiagSessionContext; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140C1CD88 )
    {
      ++*((_DWORD *)i + 53);
      if ( v2 )
        PopDirectedDripsDiagInsertErrorRecord((__int64)i, v2, 5);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
