/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140611820
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140611800 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1407BE3E0 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140611C38 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140611C74 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
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
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DMA_ADAPTER *v15; // rdi
  int v17; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[8]; // [rsp+40h] [rbp-58h] BYREF

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
    v19[0] = Object;
    LODWORD(v19[6]) = 0;
    if ( ReplyMessage
      && ((*((_DWORD *)Object + 104) & 0x2000) == 0
        ? (LODWORD(v19[6]) = 65541,
           memset(&v19[3], 0, 24),
           v17 = AlpcpSendMessage((__int64)v19, (__m256i *)ReplyMessage, 0LL, PreviousMode))
        : (LODWORD(v19[6]) = 4,
           memset(&v19[3], 0, 24),
           LOBYTE(v13) = PreviousMode,
           v17 = AlpcpReplyLegacySynchronousRequest(v19, ReplyMessage, v13)),
          v12 = v17,
          v17 < 0) )
    {
      HalPutDmaAdapter(v15);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = AlpcpReceiveLegacyMessage(v19, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v19);
      HalPutDmaAdapter(v15);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, v14);
  return v12;
}
