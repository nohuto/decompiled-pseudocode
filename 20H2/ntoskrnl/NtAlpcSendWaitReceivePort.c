/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1405EF030
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x140208A70 (AlpcpSignal.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1405EF2B0 (AlpcpReceiveMessage.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1406D99B8 (AlpcpTrackPortReferences.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        HANDLE Handle,
        int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int *Address,
        LARGE_INTEGER *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  char PreviousMode; // r14
  int v15; // esi
  int v16; // r9d
  struct _DMA_ADAPTER *v17; // rbx
  struct _KTHREAD *v19; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = a2 & 0xFFFF0000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          v15 = AlpcpProcessSynchronousRequest((__int64)v17, v13, a3, a4, a5, a6, Address, a8, PreviousMode);
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
      v24[0] = v17;
      LODWORD(v24[6]) = v13;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = AlpcpReceiveMessage(v24, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v24[6], 2u) )
        {
          AlpcpSignal((__int64)v24, 0LL, 0LL, v16);
          if ( v24[4] )
            HalPutDmaAdapter((PADAPTER_OBJECT)v24[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v24[6]) = v13 | 4;
        memset(&v24[3], 0, 24);
        v15 = AlpcpSendMessage((__int64)v24, (__m256i *)a3, a4, PreviousMode);
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
  return (unsigned int)v15;
}
