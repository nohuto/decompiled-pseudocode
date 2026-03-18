/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x1408F25D8
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408F4640 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
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
