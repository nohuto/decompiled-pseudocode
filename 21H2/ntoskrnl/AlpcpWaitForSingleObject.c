/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140234DD8
 * Callers:
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1405F8A60 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406D6CC0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     AlpcpLogUnwait @ 0x1408C3FD0 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v11;
}
