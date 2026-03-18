/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1408F392C
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408DEE70 (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x1408F29A8 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

char __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(__int64 a1)
{
  __int64 v2; // rdi
  PVOID *i; // rbx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
    *(_DWORD *)(v2 + 152) |= 0x20u;
  for ( i = (PVOID *)PopDirectedDripsDiagSessionContext; i != &PopDirectedDripsDiagSessionContext; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140C1EBA8 )
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
