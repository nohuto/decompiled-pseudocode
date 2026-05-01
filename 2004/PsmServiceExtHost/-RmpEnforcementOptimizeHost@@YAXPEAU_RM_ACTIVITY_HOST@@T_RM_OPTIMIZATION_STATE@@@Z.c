/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800275BC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018880 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000625C (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006850 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006990 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012B44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800259F8 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800278B4 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029600 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180029CD4 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18002A678 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18002A714 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A7B8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180046630 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18006B8A0 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180070C2C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180070CC0 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180077D40 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180085658 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int updated; // ebx
  int v6; // edx
  struct _HAM_DEPENDENCY_GROUP *v7; // rbx
  BOOL IsSuspendWaiter; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-38h]
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1 + 64;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
    goto LABEL_18;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1248) |= 0x100u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
      RmpReleaseGlobalLock();
      if ( (int)RmpSystemChangePsmApplicationState(a1, 2LL) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
      HampHostChangeApplicationExecutionState(v3, 2u);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1248) &= ~0x100u;
      *(_DWORD *)(a1 + 1244) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1248) |= 0x40u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
      RmpReleaseGlobalLock();
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1248) &= ~0x40u;
      *(_DWORD *)(a1 + 1244) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 712) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1244) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1248) |= 8u;
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
        RmpReleaseGlobalLock();
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
        *(_DWORD *)(a1 + 1244) |= 8u;
        *(_DWORD *)(a1 + 1248) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v3 + 648) |= 0x200000000000uLL;
      }
    }
    else
    {
      v9 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1248) |= v9;
        NtClearEvent(*(HANDLE *)(a1 + 1304));
        if ( !*(_DWORD *)(a1 + 1320) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v9);
            v10 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1248) &= ~v9;
            if ( v10 )
              *(_DWORD *)(a1 + 1244) |= v9;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1248) &= ~v9;
        }
      }
    }
    return;
  }
  if ( !HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64)) )
  {
    *(_DWORD *)(a1 + 1248) |= 0x80u;
    *(_QWORD *)(v3 + 648) = *(_QWORD *)(v3 + 648) & 0xFFFFBFFF1FFFFFFFuLL | 0x20000000;
    *(_QWORD *)(v3 + 668) = 0LL;
    HampHostIssueStopRequests(v3, 1u, 10, 0, 0, 0, 4, 0LL, v11, 0LL);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    RmpReleaseGlobalLock();
    HampUtilQueryQuiesceTimeouts(&v13, 0LL);
    v12 = v13;
    v15 = 0LL;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    *(_DWORD *)(v3 + 672) = v12;
    RtlQueryUnbiasedInterruptTime(&v14);
    *(_DWORD *)(v3 + 668) = v14 / 0x2710;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v3, v12, *(void **)(v3 + 792));
    if ( (int)RmpSystemChangePsmApplicationState(a1, 1LL) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    HampHostChangeApplicationExecutionState(v3, 1u);
    RmHamHostStateWorkerWaitForQuiesce((struct _RM_HAM_ACTIVITY_HOST *)v3, &v12, &v15);
    if ( (*(_BYTE *)(a1 + 1244) & 0x80) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v3, v6);
      *(_DWORD *)(a1 + 1248) &= ~0x80u;
      HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v3, IsSuspendWaiter);
    }
    *(_QWORD *)(v3 + 648) &= ~0x800000000000000uLL;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2720LL),
      (struct _RM_ACTIVITY_HOST *)a1);
    SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    v7 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v3);
    if ( v7 )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v7);
      RmpAcquireGlobalLock();
LABEL_18:
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    }
  }
}
