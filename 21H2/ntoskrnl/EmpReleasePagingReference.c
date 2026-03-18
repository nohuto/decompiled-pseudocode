/*
 * XREFs of EmpReleasePagingReference @ 0x140A47F30
 * Callers:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 EmpReleasePagingReference()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  dword_140C48C88 ^= (dword_140C48C88 ^ (dword_140C48C88 - 1)) & 0x7FFFFFFF;
  if ( (dword_140C48C88 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
