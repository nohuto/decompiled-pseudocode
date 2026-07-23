/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1405F29B0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x1405F2B10 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1407CFE90 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405F26F0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1405F2B2C (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1405F2B68 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
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
  NTSTATUS v11; // ebx
  struct _DMA_ADAPTER *v12; // rdi
  int v14; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = (struct _DMA_ADAPTER *)Object;
    v16[0] = (__int64)Object;
    LODWORD(v16[6]) = 0;
    if ( ReplyMessage
      && ((*((_DWORD *)Object + 104) & 0x2000) == 0
        ? (LODWORD(v16[6]) = 65541,
           memset(&v16[3], 0, 24),
           v14 = AlpcpSendMessage((__int64)v16, (__m256i *)ReplyMessage, 0LL, PreviousMode))
        : (LODWORD(v16[6]) = 4,
           memset(&v16[3], 0, 24),
           v14 = AlpcpReplyLegacySynchronousRequest(v16, (unsigned __int64)ReplyMessage, PreviousMode)),
          v11 = v14,
          v14 < 0) )
    {
      HalPutDmaAdapter(v12);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v16, (unsigned __int64)ReceiveMessage, (__int64 *)Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v16);
      HalPutDmaAdapter(v12);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
