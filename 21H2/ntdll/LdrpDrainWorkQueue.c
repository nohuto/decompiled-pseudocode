/*
 * XREFs of LdrpDrainWorkQueue @ 0x18005FEF4
 * Callers:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrEnumerateLoadedModules @ 0x18005EDF0 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D05B0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800D64B0 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18006011C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x180060314 (LdrpUpdateStatistics.c)
 *     NtWaitForSingleObject @ 0x18009D6C0 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // bp
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  struct _TEB *result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8

  v1 = (HANDLE)LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
      v6 = LdrpDetourExist;
      if ( !LdrpDetourExist || a1 == 1 )
      {
        v7 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v8 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v8 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue == v7 )
        {
          if ( LdrpWorkInProgress == a1 )
          {
            LdrpWorkInProgress = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v6 )
            ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
      }
      else
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v7 = &LdrpWorkQueue;
      }
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, v4, v5);
      if ( v2 )
        break;
      if ( &LdrpWorkQueue == v7 )
      {
        NtWaitForSingleObject(v1, 0, 0LL);
      }
      else
      {
        LOBYTE(v9) = v6;
        LdrpProcessWork(v7 - 8, v9);
      }
    }
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v11 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v11;
    v12 = qword_18016C3A8;
    *(_QWORD *)qword_18016C3A8 = &LdrpWorkQueue;
    qword_18016C3F8 = v12;
    qword_18016C3A8 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, v13, v14);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
