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

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  NTSTATUS result; // eax
  int v6; // ebx
  NTSTATUS v7; // esi
  struct _TEB *v8; // eax
  int v9; // esi
  void *UniqueThread; // eax
  struct _RTLP_FLS_CONTEXT *v11; // [esp+0h] [ebp-34h]
  unsigned int v12; // [esp+4h] [ebp-30h]
  int v13[7]; // [esp+10h] [ebp-24h] BYREF
  ULONG v14; // [esp+2Ch] [ebp-8h]
  ULONG ThreadFlags; // [esp+30h] [ebp-4h]

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v6 = 2;
  v14 = 2 * (ProcessFlags & 2);
  ThreadFlags = ProcessFlags & 1;
  if ( (ProcessFlags & 4) == 0 )
  {
    v7 = LdrpPrepareForProcesscloning();
    if ( v7 >= 0 )
    {
      RtlpFlsClonePrepare(v11);
      RtlEnterCriticalSection(&FastPebLock);
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
        RtlLeaveCriticalSection(&FastPebLock);
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
  v13[1] = (int)ProcessSecurityDescriptor;
  v13[2] = (int)ThreadSecurityDescriptor;
  v13[4] = (int)DebugPort;
  result = RtlpCreateUserProcess(v14, ThreadFlags, (int)v13, ProcessInformation);
  ThreadFlags = result;
  if ( (ProcessFlags & 4) == 0 )
  {
    if ( result == 297 )
    {
      v8 = NtCurrentTeb();
      RtlCriticalSectionLock.0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)1;
      v9 = 1;
      v6 = 1;
      UniqueThread = v8->ClientId.UniqueThread;
      FastPebLock.LockSemaphore = 0;
      FastPebLock.OwningThread = UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
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
      RtlpProtectedPoliciesSRWLock.0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)1;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v9);
    LdrpUnlockTlsDelayedReclaimTable((void *)v9);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete(v11, v12);
    LdrpCompleteProcessCloning((void *)v9);
    if ( v9 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
    return ThreadFlags;
  }
  return result;
}
