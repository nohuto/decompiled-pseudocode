/*
 * XREFs of PopCoalescingNotify @ 0x1408E6A10
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402434B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140272730 (PopPrintEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x14056EEA4 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14056EF30 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
    PopPrintEx(3u, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
