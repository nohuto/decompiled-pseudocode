/*
 * XREFs of EmpAcquirePagingReference @ 0x14098C254
 * Callers:
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14098C350 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_140C478C8 < 0 )
  {
    v0 = 1;
    dword_140C478C8 ^= (dword_140C478C8 ^ (dword_140C478C8 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
