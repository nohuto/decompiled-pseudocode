/*
 * XREFs of PsGetNextProcess @ 0x140659AB0
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A2B70 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x140659378 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x140659A54 (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x1406D6BF0 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407C1790 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140898438 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A3D7C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408CCAB8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x14090A334 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090D648 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14090D980 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x14093923C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140949C88 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A70A24 (PopEtInit.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x140253A68 (PspUnlockProcessListShared.c)
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
