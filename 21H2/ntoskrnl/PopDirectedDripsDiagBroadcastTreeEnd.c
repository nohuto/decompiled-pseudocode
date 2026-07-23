/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x1408F6E18
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408F8E50 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall PopDirectedDripsDiagBroadcastTreeEnd(__int64 a1, int a2, int a3, char a4)
{
  char result; // al

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    if ( a2 < 0 || (*(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (16 * a3)) & 0xF0, a4) )
      *(_DWORD *)(a1 + 40) |= 0x100u;
    else
      *(_DWORD *)(a1 + 40) &= ~0x100u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
