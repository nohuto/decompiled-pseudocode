/*
 * XREFs of PopCoalescingNotify @ 0x1408E68B0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402C4F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     PopPrintEx @ 0x14028411C (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x14056EC64 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14056ECF0 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingNotify(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  PopAcquirePolicyLock(a1);
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3LL, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
