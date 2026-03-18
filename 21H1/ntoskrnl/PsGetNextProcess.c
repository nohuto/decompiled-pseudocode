/*
 * XREFs of PsGetNextProcess @ 0x1405EF280
 * Callers:
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x1405EEB64 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1405EF224 (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x1406E0D50 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407B06D0 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140880420 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140891498 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14089CF2C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408C5928 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140903434 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140906778 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x140906AB0 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x140932160 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A69EB8 (PopEtInit.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x140239B90 (PspUnlockProcessListShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[137];
  while ( v5 != &PsActiveProcessHead )
  {
    v2 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
