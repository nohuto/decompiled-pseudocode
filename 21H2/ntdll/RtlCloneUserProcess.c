/*
 * XREFs of RtlCloneUserProcess @ 0x1800D6470
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     RtlWakeAllConditionVariable @ 0x18004C9D0 (RtlWakeAllConditionVariable.c)
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007F1B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x180089030 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B28 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D534C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5394 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5A50 (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DF3F4 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF49C (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F31D8 (RtlUnlockHeapManagerForCloning.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  int v9; // esi
  ULONG v10; // r14d
  ULONG v11; // ebp
  ULONG v12; // edi
  struct _RTLP_FLS_CONTEXT *v13; // rcx
  NTSTATUS v14; // ebx
  struct _RTLP_FLS_CONTEXT *v15; // rcx
  NTSTATUS UserProcess; // eax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  struct _RTLP_FLS_CONTEXT *v19; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+60h] [rbp-38h]

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 2;
  v10 = ProcessFlags & 1;
  v11 = 2 * (ProcessFlags & 2);
  v12 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      return -1073741420;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    RtlpFlsClonePrepare(v13);
    RtlEnterCriticalSection(&FastPebLock);
    LdrpLockTlsDelayedReclaimTable();
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrForkMrdata(0);
    v14 = RtlLockHeapManagerForCloning();
    if ( v14 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
      v14 = 0;
      LdrpForkInProgress = 1;
    }
    else
    {
      LdrForkMrdata(2);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpFlsCloneComplete(v15, 0);
      LdrpCompleteProcessCloning(0);
    }
    if ( v14 < 0 )
      return v14;
  }
  v23 = 0LL;
  v20[0] = 1LL;
  v20[1] = ProcessSecurityDescriptor;
  v21 = (unsigned __int64)ThreadSecurityDescriptor;
  v22 = (unsigned __int64)DebugPort;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v20, (__int64)ProcessInformation);
  v17 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v18 = 1;
      v9 = 1;
      FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
      FastPebLock.LockSemaphore = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v18);
    LdrpUnlockTlsDelayedReclaimTable(v18);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete(v19, v18);
    LdrpCompleteProcessCloning(v18);
    if ( v18 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v17;
}
