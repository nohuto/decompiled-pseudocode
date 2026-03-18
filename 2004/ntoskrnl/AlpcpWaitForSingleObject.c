/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140342E34
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x140684DE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406E8CDC (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x1408C0870 (AlpcpLogUnwait.c)
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
