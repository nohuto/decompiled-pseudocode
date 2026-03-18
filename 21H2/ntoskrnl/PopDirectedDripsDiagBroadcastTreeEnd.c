/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x14099E420
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x14099F5D8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopDirectedDripsDiagBroadcastTreeEnd(__int64 a1, int a2, int a3, char a4)
{
  __int64 result; // rax

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
