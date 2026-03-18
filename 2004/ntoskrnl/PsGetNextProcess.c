/*
 * XREFs of PsGetNextProcess @ 0x140698790
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A06A0 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x140698064 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x14069873C (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x140703AE0 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407B3840 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140881740 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408927B8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14089E24C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408C6C78 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408D8A10 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140904714 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140907A28 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x140907D60 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x14093340C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140943EC8 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A6A118 (PopEtInit.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessListShared @ 0x1402CC9C0 (PspUnlockProcessListShared.c)
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
