/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1406DA1C0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x1406DA320 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1407D43F0 (NtListenPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1406D9F00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1406DA33C (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406DA378 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DMA_ADAPTER *v15; // rdi
  int v17; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v15 = (struct _DMA_ADAPTER *)Object;
    v19[0] = (__int64)Object;
    LODWORD(v19[6]) = 0;
    if ( ReplyMessage
      && ((*((_DWORD *)Object + 104) & 0x2000) == 0
        ? (LODWORD(v19[6]) = 65541,
           memset(&v19[3], 0, 24),
           v17 = AlpcpSendMessage((__int64)v19, (__m256i *)ReplyMessage, 0LL, PreviousMode))
        : (LODWORD(v19[6]) = 4,
           memset(&v19[3], 0, 24),
           v17 = AlpcpReplyLegacySynchronousRequest(v19, (unsigned __int64)ReplyMessage, PreviousMode)),
          v12 = v17,
          v17 < 0) )
    {
      HalPutDmaAdapter(v15);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = AlpcpReceiveLegacyMessage(v19, (unsigned __int64)ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v19);
      HalPutDmaAdapter(v15);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, v14);
  return v12;
}
