/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140314168
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1405EEBA0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406BD87C (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     AlpcpLogUnwait @ 0x1408C66B0 (AlpcpLogUnwait.c)
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
