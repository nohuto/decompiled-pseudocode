/*
 * XREFs of EmpAcquirePagingReference @ 0x140993244
 * Callers:
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140993340 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_140C477B8 < 0 )
  {
    v0 = 1;
    dword_140C477B8 ^= (dword_140C477B8 ^ (dword_140C477B8 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
