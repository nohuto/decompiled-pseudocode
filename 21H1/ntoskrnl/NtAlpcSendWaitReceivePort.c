/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14060A800
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpSignal @ 0x14033495C (AlpcpSignal.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpReceiveMessage @ 0x14060AA80 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1406E3498 (AlpcpTrackPortReferences.c)
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
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // r8
  _DWORD *v18; // r9
  struct _DMA_ADAPTER *v19; // rbx
  struct _KTHREAD *v21; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v23; // rcx
  int v25; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v27[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v27, 0, sizeof(v27));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = Flags & 0xFFFF0000;
  Object = 0LL;
  v14 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v16 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v16 >= 0 )
  {
    v19 = (struct _DMA_ADAPTER *)Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( SendMessageA )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v16 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v16 = -1073741584;
        }
        else if ( ReceiveMessage )
        {
          LOBYTE(v25) = v14;
          v16 = AlpcpProcessSynchronousRequest(
                  (int)v19,
                  v13,
                  (int)SendMessageA,
                  (int)SendMessageAttributes,
                  (__int64)ReceiveMessage,
                  (__int64)BufferLength,
                  ReceiveMessageAttributes,
                  (__int64)Timeout,
                  v25);
        }
        else
        {
          v16 = -1073740027;
        }
      }
      else
      {
        v16 = -1073741584;
      }
    }
    else
    {
      v27[0] = v19;
      LODWORD(v27[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v16 = AlpcpReceiveMessage(v27, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v27[6], 2u) )
        {
          AlpcpSignal((__int64)v27, 0LL, 0LL, v18);
          if ( v27[4] )
            HalPutDmaAdapter((PADAPTER_OBJECT)v27[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v16 = -1073741584;
      }
      else
      {
        LODWORD(v27[6]) = v13 | 4;
        memset(&v27[3], 0, 24);
        v16 = AlpcpSendMessage(v27, SendMessageA, SendMessageAttributes, v14);
        if ( v16 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    HalPutDmaAdapter(v19);
  }
  v21 = KeGetCurrentThread();
  if ( v21->KernelApcDisable++ == -1 )
  {
    v23 = &v21->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v23->ApcState.ApcListHead[0].Flink != v23 && !v21->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v23, v15, v17, v18);
  }
  return v16;
}
