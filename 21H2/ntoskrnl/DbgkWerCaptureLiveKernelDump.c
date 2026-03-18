/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14080B5F0
 * Callers:
 *     PopUserPresentSet @ 0x140368ED4 (PopUserPresentSet.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1403A0800 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1405CC2CC (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     CarLiveDump @ 0x1406053C0 (CarLiveDump.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x140641EE0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1409964E4 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopWin32CalloutWatchdogCallback @ 0x14099CE40 (PopWin32CalloutWatchdogCallback.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1409A07D0 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A0958 (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A24C0 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x140A01E10 (ExpIoPoolDeadlockWorker.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkpWerCleanupContext @ 0x14080B79C (DbgkpWerCleanupContext.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x14080B840 (DbgkpWerIsFullLiveDumpDisabled.c)
 *     DbgkpWerProcessPolicyResult @ 0x14092C10C (DbgkpWerProcessPolicyResult.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *PoolWithTag; // rax
  wchar_t *v15; // rbx
  NTSTATUS v16; // esi
  size_t v17; // r11
  int v19; // ecx
  int v20; // eax
  char v21[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-34h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF

  v21[0] = 1;
  v22 = 0;
  v23[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  else if ( DbgkpWerInitialized )
  {
    if ( !(unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      if ( _InterlockedExchange(&DbgkpBusy, 1) == 1 )
      {
        v16 = -1073741267;
      }
      else
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0xB8uLL);
          v16 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
          if ( v16 >= 0 )
          {
            v16 = RtlStringCchCopyW(v15, v17, pszSrc);
            if ( v16 >= 0 )
            {
              v19 = DbgkpWerDefaultPolicy;
              if ( (a9 & 2) != 0 )
                v19 = 1;
              v22 = v19;
              *((_QWORD *)v15 + 7) = a5;
              *((_QWORD *)v15 + 8) = a6;
              *((_QWORD *)v15 + 9) = a7;
              *((_QWORD *)v15 + 10) = a8;
              *((_DWORD *)v15 + 8) = a2;
              *((_QWORD *)v15 + 5) = a3;
              *((_QWORD *)v15 + 6) = a4;
              *((_DWORD *)v15 + 22) = a9;
              if ( (a9 & 8) != 0 )
                *((_DWORD *)v15 + 28) &= ~2u;
              else
                *((_DWORD *)v15 + 28) |= 2u;
              v20 = WerLiveKernelCreateReport(v15, &v22, v23);
              v16 = v20;
              if ( v20 >= 0 )
              {
                v16 = DbgkpWerProcessPolicyResult(v15, v22, v23[0], v21);
                if ( !v21[0] )
                  goto LABEL_9;
              }
              else
              {
                DbgPrintEx(
                  5u,
                  0,
                  "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
                  v20);
              }
            }
          }
          DbgkpWerCleanupContext(v15);
          ExFreePoolWithTag(v15, 0x57676244u);
        }
        else
        {
          v16 = -1073741670;
        }
        _InterlockedExchange(&DbgkpBusy, 0);
      }
LABEL_9:
      KeLeaveCriticalRegion();
      return (unsigned int)v16;
    }
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  else
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
}
