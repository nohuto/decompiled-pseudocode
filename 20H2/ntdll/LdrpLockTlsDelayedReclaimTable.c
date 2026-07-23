/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800D55DC
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009C400 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6700 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_18016D3B8;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
