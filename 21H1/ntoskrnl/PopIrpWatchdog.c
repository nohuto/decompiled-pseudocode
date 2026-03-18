/*
 * XREFs of PopIrpWatchdog @ 0x14055F660
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIrpWatchdogBugcheck @ 0x14055F698 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, ULONG a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpWatchdogBugcheck(a2);
}
