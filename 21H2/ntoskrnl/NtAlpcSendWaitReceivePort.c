/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1406D7150
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     AlpcpSignal @ 0x1402AA060 (AlpcpSignal.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpTrackPortReferences @ 0x140617618 (AlpcpTrackPortReferences.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v15; // esi
  __int64 v16; // r9
  struct _DMA_ADAPTER *v17; // rbx
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = Flags & 0xFFFF0000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences((__int64)Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( SendMessageA )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( ReceiveMessage )
        {
          v15 = AlpcpProcessSynchronousRequest(
                  (__int64)v17,
                  v13,
                  (__int128 *)&SendMessageA->u1.s1.DataLength,
                  (__int64)SendMessageAttributes,
                  (unsigned __int64)ReceiveMessage,
                  BufferLength,
                  (int *)ReceiveMessageAttributes,
                  Timeout,
                  PreviousMode);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v23[0] = v17;
      LODWORD(v23[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v15 = AlpcpReceiveMessage(v23, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v23[6], 2u) )
        {
          AlpcpSignal((__int64)v23, 0, 0, v16);
          if ( v23[4] )
            HalPutDmaAdapter((PADAPTER_OBJECT)v23[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v23[6]) = v13 | 4;
        memset(&v23[3], 0, 24);
        v15 = AlpcpSendMessage((__int64)v23, (__m256i *)SendMessageA, (__int64)SendMessageAttributes, PreviousMode);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    HalPutDmaAdapter(v17);
  }
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v15;
}
