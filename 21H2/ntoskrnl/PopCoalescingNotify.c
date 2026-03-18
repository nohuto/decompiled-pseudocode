/*
 * XREFs of PopCoalescingNotify @ 0x14098F180
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopCoalescingSetTimer @ 0x1405CFBF0 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1405CFC70 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
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
