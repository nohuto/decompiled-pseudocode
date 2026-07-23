/*
 * XREFs of PopEtEnergyTrackerClose @ 0x1408F2CA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopEtEnergyTrackerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    PopAcquireRwLockExclusive(a2 + 16);
    *(_DWORD *)(a2 + 636) |= 2u;
    PopReleaseRwLock(a2 + 16);
  }
}
