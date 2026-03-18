/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1408F9730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408F9A00 (TtmpSetTerminalPendingCleanup.c)
 *     TtmiLogTerminalHandleClosed @ 0x1409003B4 (TtmiLogTerminalHandleClosed.c)
 */

__int64 __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  HANDLE ProcessId; // rax

  v5 = *(_DWORD *)(a2 + 28);
  v8 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  ProcessId = PsGetProcessId(Process);
  return TtmiLogTerminalHandleClosed(v8, v5, ProcessId, a4);
}
