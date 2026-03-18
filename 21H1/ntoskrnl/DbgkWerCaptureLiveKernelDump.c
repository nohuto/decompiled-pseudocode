/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140884720
 * Callers:
 *     PopUserPresentSet @ 0x1403A2AF4 (PopUserPresentSet.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14056502C (PopFxEnforceDirectedPowerTransition.c)
 *     PopIdlePhaseWatchdogCallback @ 0x140570B40 (PopIdlePhaseWatchdogCallback.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1405B3E50 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EAAC8 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopWin32CalloutWatchdogCallbackLiveDump @ 0x1408F0E10 (PopWin32CalloutWatchdogCallbackLiveDump.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1408F5E68 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408F5FF0 (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408F83B0 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x1409513D0 (ExpIoPoolDeadlockWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     RtlStringCchLengthW @ 0x1402DF438 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14036E430 (RtlStringCchCopyW.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     DbgkpWerCleanupContext @ 0x140884C90 (DbgkpWerCleanupContext.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x1408851B8 (DbgkpWerIsFullLiveDumpDisabled.c)
 *     DbgkpWerProcessPolicyResult @ 0x1408852BC (DbgkpWerProcessPolicyResult.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  NTSTATUS v15; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  unsigned int v18; // r11d
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
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
  if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v15 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
      if ( v15 >= 0 )
      {
        v15 = RtlStringCchCopyW(v17, v18, pszSrc);
        if ( v15 >= 0 )
        {
          v19 = DbgkpWerDefaultPolicy;
          if ( (a9 & 2) != 0 )
            v19 = 1;
          v22 = v19;
          *((_QWORD *)v17 + 7) = a5;
          *((_QWORD *)v17 + 8) = a6;
          *((_QWORD *)v17 + 9) = a7;
          *((_QWORD *)v17 + 10) = a8;
          *((_DWORD *)v17 + 8) = a2;
          *((_QWORD *)v17 + 5) = a3;
          *((_QWORD *)v17 + 6) = a4;
          *((_DWORD *)v17 + 22) = a9;
          v20 = WerLiveKernelCreateReport(v17, &v22, v23);
          v15 = v20;
          if ( v20 >= 0 )
          {
            v15 = DbgkpWerProcessPolicyResult(v17, v22, v23[0], v21);
            if ( !v21[0] )
              goto LABEL_20;
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
      DbgkpWerCleanupContext(v17);
      ExFreePoolWithTag(v17, 0x57676244u);
    }
    else
    {
      v15 = -1073741670;
    }
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_20;
  }
  v15 = -1073741267;
LABEL_20:
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
