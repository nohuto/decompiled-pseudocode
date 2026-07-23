/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x140682950
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     AlpcpSignal @ 0x1402EF81C (AlpcpSignal.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveMessage @ 0x140682BD0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     AlpcpTrackPortReferences @ 0x140706E58 (AlpcpTrackPortReferences.c)
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
  unsigned __int8 v14; // r14
  int v15; // esi
  _DWORD *v16; // r9
  struct _DMA_ADAPTER *v17; // rbx
  struct _KTHREAD *v19; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v21; // rcx
  int v23; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = Flags & 0xFFFF0000;
  Object = 0LL;
  v14 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v15 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
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
          LOBYTE(v23) = v14;
          v15 = AlpcpProcessSynchronousRequest(
                  (int)v17,
                  v13,
                  (int)SendMessageA,
                  (int)SendMessageAttributes,
                  (__int64)ReceiveMessage,
                  (__int64)BufferLength,
                  ReceiveMessageAttributes,
                  (__int64)Timeout,
                  v23);
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
      v25[0] = v17;
      LODWORD(v25[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v15 = AlpcpReceiveMessage(v25, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v25[6], 2u) )
        {
          AlpcpSignal((__int64)v25, 0LL, 0LL, v16);
          if ( v25[4] )
            HalPutDmaAdapter((PADAPTER_OBJECT)v25[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v25[6]) = v13 | 4;
        memset(&v25[3], 0, 24);
        v15 = AlpcpSendMessage(v25, SendMessageA, SendMessageAttributes, v14);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    HalPutDmaAdapter(v17);
  }
  v19 = KeGetCurrentThread();
  if ( v19->KernelApcDisable++ == -1 )
  {
    v21 = &v19->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != v21 && !v19->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v21);
  }
  return v15;
}
