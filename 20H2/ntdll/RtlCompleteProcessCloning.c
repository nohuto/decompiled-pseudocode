/*
 * XREFs of RtlCompleteProcessCloning @ 0x18009C2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180055420 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007E890 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4DB8 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5624 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5CE0 (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DF684 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F3388 (RtlUnlockHeapManagerForCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  unsigned int v2; // edi
  void *UniqueThread; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _RTLP_FLS_CONTEXT *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016C0F8 = 0LL;
    qword_18016C0F0 = (__int64)UniqueThread;
    dword_18016C0E8 = -2;
    dword_18016C0EC = 1;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock = 1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock, v4, v5);
  RtlpFlsCloneComplete(v6, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v7, v8, v9);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
