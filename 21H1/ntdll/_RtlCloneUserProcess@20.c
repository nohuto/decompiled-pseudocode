/*
 * XREFs of _RtlCloneUserProcess@20 @ 0x4B335760
 * Callers:
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlWakeAllConditionVariable@4 @ 0x4B2EA460 (_RtlWakeAllConditionVariable@4.c)
 *     _LdrpCompleteProcessCloning@4 @ 0x4B333C39 (_LdrpCompleteProcessCloning@4.c)
 *     _LdrpPrepareForProcesscloning@0 @ 0x4B333CB9 (_LdrpPrepareForProcesscloning@0.c)
 *     _LdrpLockTlsDelayedReclaimTable@0 @ 0x4B33474F (_LdrpLockTlsDelayedReclaimTable@0.c)
 *     _LdrpUnlockTlsDelayedReclaimTable@4 @ 0x4B33477F (_LdrpUnlockTlsDelayedReclaimTable@4.c)
 *     _LdrForkMrdata@4 @ 0x4B334E58 (_LdrForkMrdata@4.c)
 *     ?RtlpFlsCloneComplete@@YGXPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B33D50F (-RtlpFlsCloneComplete@@YGXPAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YGXPAU_RTLP_FLS_CONTEXT@@@Z @ 0x4B33D56D (-RtlpFlsClonePrepare@@YGXPAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     _RtlpCreateUserProcess@24 @ 0x4B342119 (_RtlpCreateUserProcess@24.c)
 *     _RtlAcquireReleaseSRWLockExclusive@4 @ 0x4B34A390 (_RtlAcquireReleaseSRWLockExclusive@4.c)
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 *     _RtlUnlockHeapManagerForCloning@4 @ 0x4B3573F1 (_RtlUnlockHeapManagerForCloning@4.c)
 */

int __stdcall RtlCloneUserProcess(int a1, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  int v6; // ebx
  int v7; // esi
  struct _TEB *v8; // eax
  int v9; // esi
  int UniqueThread; // eax
  struct _RTLP_FLS_CONTEXT *v11; // [esp+0h] [ebp-34h]
  unsigned int v12; // [esp+4h] [ebp-30h]
  int v13[7]; // [esp+10h] [ebp-24h] BYREF
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v6 = 2;
  v14 = 2 * (a1 & 2);
  v15 = a1 & 1;
  if ( (a1 & 4) == 0 )
  {
    v7 = LdrpPrepareForProcesscloning();
    if ( v7 >= 0 )
    {
      RtlpFlsClonePrepare(v11);
      RtlEnterCriticalSection((int)&FastPebLock);
      LdrpLockTlsDelayedReclaimTable();
      RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrForkMrdata(0);
      v7 = RtlLockHeapManagerForCloning();
      if ( v7 >= 0 )
      {
        RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
        RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
        v7 = 0;
        LdrpForkInProgress = 1;
      }
      else
      {
        LdrForkMrdata((void *)2);
        RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
        LdrpUnlockTlsDelayedReclaimTable(0);
        RtlLeaveCriticalSection((int)&FastPebLock);
        RtlpFlsCloneComplete(v11, v12);
        LdrpCompleteProcessCloning(0);
      }
    }
    if ( v7 < 0 )
      return v7;
  }
  v13[0] = 1;
  v13[3] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v13[1] = a2;
  v13[2] = a3;
  v13[4] = a4;
  result = RtlpCreateUserProcess(v14, v15, (int)v13, a5);
  v15 = result;
  if ( (a1 & 4) == 0 )
  {
    if ( result == 297 )
    {
      v8 = NtCurrentTeb();
      RtlCriticalSectionLock = 1;
      v9 = 1;
      v6 = 1;
      UniqueThread = (int)v8->ClientId.UniqueThread;
      dword_4B3A5B50 = 0;
      dword_4B3A5B4C = UniqueThread;
      dword_4B3A5B44 = -2;
      dword_4B3A5B48 = 1;
    }
    else
    {
      v9 = 0;
      LdrpForkInProgress = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata((void *)v6);
    if ( v6 == 1 )
      RtlpProtectedPoliciesSRWLock = 1;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v9);
    LdrpUnlockTlsDelayedReclaimTable((void *)v9);
    RtlLeaveCriticalSection((int)&FastPebLock);
    RtlpFlsCloneComplete(v11, v12);
    LdrpCompleteProcessCloning((void *)v9);
    if ( v9 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
    return v15;
  }
  return result;
}
