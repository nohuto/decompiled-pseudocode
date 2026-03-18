/*
 * XREFs of EmpReleasePagingReference @ 0x14098C1D8
 * Callers:
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14098C350 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char EmpReleasePagingReference()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  dword_140C478C8 ^= (dword_140C478C8 ^ (dword_140C478C8 - 1)) & 0x7FFFFFFF;
  if ( (dword_140C478C8 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
